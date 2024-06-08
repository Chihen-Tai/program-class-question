#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define BALL_SIZE 10
#define PADDLE_WIDTH 100
#define PADDLE_HEIGHT 10
#define BRICK_ROWS 5
#define BRICK_COLUMNS 10
#define BRICK_WIDTH (SCREEN_WIDTH / BRICK_COLUMNS)
#define BRICK_HEIGHT 20

typedef struct {
    float x, y;
    float dx, dy;
} Ball;

typedef struct {
    float x, y;
} Paddle;

typedef struct {
    float x, y;
    bool alive;
} Brick;

void init_ball(Ball *ball) {
    ball->x = SCREEN_WIDTH / 2;
    ball->y = SCREEN_HEIGHT / 2;
    ball->dx = 4;
    ball->dy = 4;
}

void init_paddle(Paddle *paddle) {
    paddle->x = (SCREEN_WIDTH - PADDLE_WIDTH) / 2;
    paddle->y = SCREEN_HEIGHT - PADDLE_HEIGHT - 20;
}

void init_bricks(Brick bricks[BRICK_ROWS][BRICK_COLUMNS]) {
    for (int i = 0; i < BRICK_ROWS; i++) {
        for (int j = 0; j < BRICK_COLUMNS; j++) {
            bricks[i][j].x = j * BRICK_WIDTH;
            bricks[i][j].y = i * BRICK_HEIGHT;
            bricks[i][j].alive = true;
        }
    }
}

void draw_ball(Ball *ball) {
    al_draw_filled_circle(ball->x, ball->y, BALL_SIZE, al_map_rgb(255, 0, 0));
}

void draw_paddle(Paddle *paddle) {
    al_draw_filled_rectangle(paddle->x, paddle->y, paddle->x + PADDLE_WIDTH, paddle->y + PADDLE_HEIGHT, al_map_rgb(0, 255, 0));
}

void draw_bricks(Brick bricks[BRICK_ROWS][BRICK_COLUMNS]) {
    for (int i = 0; i < BRICK_ROWS; i++) {
        for (int j = 0; j < BRICK_COLUMNS; j++) {
            if (bricks[i][j].alive) {
                al_draw_filled_rectangle(bricks[i][j].x, bricks[i][j].y, bricks[i][j].x + BRICK_WIDTH, bricks[i][j].y + BRICK_HEIGHT, al_map_rgb(0, 0, 255));
            }
        }
    }
}

void update_ball(Ball *ball, Paddle *paddle, Brick bricks[BRICK_ROWS][BRICK_COLUMNS]) {
    ball->x += ball->dx;
    ball->y += ball->dy;

    if (ball->x <= 0 || ball->x >= SCREEN_WIDTH) {
        ball->dx = -ball->dx;
    }
    if (ball->y <= 0) {
        ball->dy = -ball->dy;
    }

    if (ball->y >= SCREEN_HEIGHT) {
        init_ball(ball);
    }

    if (ball->y + BALL_SIZE >= paddle->y && ball->x >= paddle->x && ball->x <= paddle->x + PADDLE_WIDTH) {
        ball->dy = -ball->dy;
    }

    for (int i = 0; i < BRICK_ROWS; i++) {
        for (int j = 0; j < BRICK_COLUMNS; j++) {
            Brick *brick = &bricks[i][j];
            if (brick->alive && ball->y - BALL_SIZE <= brick->y + BRICK_HEIGHT && ball->y + BALL_SIZE >= brick->y &&
                ball->x + BALL_SIZE >= brick->x && ball->x - BALL_SIZE <= brick->x + BRICK_WIDTH) {
                brick->alive = false;
                ball->dy = -ball->dy;
            }
        }
    }
}

int main() {
    if (!al_init()) {
        return -1;
    }

    ALLEGRO_DISPLAY *display = al_create_display(SCREEN_WIDTH, SCREEN_HEIGHT);
    if (!display) {
        return -1;
    }

    al_install_keyboard();
    al_init_primitives_addon();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    ALLEGRO_TIMER *timer = al_create_timer(1.0 / 60);
    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    ALLEGRO_FONT *font = al_load_ttf_font("arial.ttf", 24, 0);

    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    Ball ball;
    Paddle paddle;
    Brick bricks[BRICK_ROWS][BRICK_COLUMNS];

    init_ball(&ball);
    init_paddle(&paddle);
    init_bricks(bricks);

    al_start_timer(timer);
    bool doexit = false;
    bool redraw = true;
    ALLEGRO_EVENT ev;

    while (!doexit) {
        al_wait_for_event(event_queue, &ev);

        if (ev.type == ALLEGRO_EVENT_TIMER) {
            update_ball(&ball, &paddle, bricks);
            redraw = true;
        } else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            doexit = true;
        } else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            if (ev.keyboard.keycode == ALLEGRO_KEY_LEFT) {
                paddle.x -= 10;
            } else if (ev.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
                paddle.x += 10;
            }
        }

        if (redraw && al_is_event_queue_empty(event_queue)) {
            redraw = false;
            al_clear_to_color(al_map_rgb(0, 0, 0));
            draw_ball(&ball);
            draw_paddle(&paddle);
            draw_bricks(bricks);
            al_flip_display();
        }
    }

    al_destroy_timer(timer);
    al_destroy_event_queue(event_queue);
    al_destroy_display(display);
    al_destroy_font(font);

    return 0;
}
