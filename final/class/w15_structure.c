#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義一個新的資料型態
// 取名叫Point
// 裡面包含x和y兩個整數
// 定義過後，Point就可以當作一個資料型態來使用
// 包括新的變數或是宣告function
typedef struct
{
    int x;
    int y;
} Point;

// ones_vec_1會傳回某個Point 結構的位址
// 這個位址是由Point結構組成的陣列開頭位址
Point *ones_vec_1(int length);

/* 傳入一個指向 Point* 的指標，ones_vec_2 會把 Point* 的值設定成
由 Point 結構組成的陣列的開頭位址*/
void ones_vec_2(Point **p, int length);

int main()
{
    Point *a;
    Point *b;
    int i, length;

    printf("The size of a Point is %lu bytes\n", sizeof(Point));

    printf("vector length: ");
    scanf("%d", &length);

    // 利用ones_vec_1來取得一個Point結構的陣列
    // 陣列的每個元素都是Point結構
    // 陣列的開頭位址會被指定給a
    a = ones_vec_1(length);
    // 指標變數b同理
    ones_vec_2(&b, length);

    // a是個指標變數，指向一個Point結構的陣列且紀錄陣列的開頭位址
    // 陣列的每個元素都是a[i] Point結構
    // 所以有兩個members分別是a[i].x,a[i].y
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("(%d,%d) ", a[i].x, a[i].y);
    }
    printf("\n");
    for(int i=0;i<length;i++)
    printf("(%d,%d) ", b[i].x, b[i].y);
}

Point *ones_vec_1(int length)
{
    Point *ap;

    int i;
    ap = (Point *)malloc(length * sizeof(Point));
    for (i = 0; i < length; i++)
    {
        ap[i].x = 1;
        ap[i].y = 1;
    }
    return ap;
}

void ones_vec_2(Point **p, int length)
{
    int i;
    *p = (Point *)malloc(length * sizeof(Point));
    for (i = 0; i < length; i++)
    {
        (*p)[i].x = 1;
        (*p)[i].y = 1;
    }
}