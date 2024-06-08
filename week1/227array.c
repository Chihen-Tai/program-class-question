#include <stdio.h>
int main(void)
{
    int x[10] = {0};             // create an integer array of 10 elements. all elements are initialized as 0
    int y[5] = {2, 4, 6, 8, 10}; // create an intege4r array of five elements with the given initial values
    char a[10] = "xyz";

    a[0] = 'a'; //''字元 ""字串
    a[1] = 'b';
    a[2] = 'c';
    a[3] = '\0'; // end
    x[0] = 3;
    x[9] = 100;
    // y[5]=0會出錯
    // the index start with 0
    // y has fuve elements, so the index goes from 0 to 4

    printf("%d %d %d %d %d\n", y[0], y[1], y[2], y[3], y[4]);
    printf("%d %d\n", x[0], x[3]);
    printf("%s\n", a);

    return 0;
}
