#include <stdio.h>
void check(int cond)
{
    if (cond)
    {
        printf("True\n");
    }
    else
    {
        printf("Flase\n");
    }
}
int main()
{
    int x = 5;
    int y = 3;
    check(x > 2 && y == 3);
    check(!(x < 2 || y == 3));
    check(x != 0 && y);
    check(x == 0 || !y);
    check(x != y && (20 / x) < y);
    check(!(y > 5 || y < 2) && !(x % 5));
    check(!x && x);

    return 0;
}