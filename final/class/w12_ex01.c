#include <stdio.h>

int main()
{
    int *pt;
    int(*pa)[3];
    int a[2][3];
    int b[3][2];
    int **p2;

    pt = &a[0][0];
    pt = a[0];
    pa = a;//int(*pa)[3] 所以pa=a是對的
    pa = b;//wrong[2]
    p2 = &pt;
    *p2 = b[0];
    p2 = b;//wrong
    return 0;
    /*ible pointer type 'int (*)[2]' [-Wincompatible-pointer-types]     
     pa = b;
        ^
w12_ex01.c:17:8: warning: assignment to 'int **' from incompatible pointer type 'int (*)[2]' [-Wincompatible-pointer-types]
     p2 = b*/
}