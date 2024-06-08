#include <stdio.h>
void f2(int *q)
{
    *q=*q+1;
}
void test(int* p) {
    p++;
    //讓p的值+1 並沒有改變地址
}
int main()
{
    int x=100;
    int y=500;
    int *px;
    int *py;

    px=&x;
    f2(px);

    py=&y;
    f2(py);

    printf("%d %d\n",x,y);
    printf("%p %p\n",px,py);
    test(px);
    printf("%d %d\n",x,y);
    printf("%p %p\n",px,py);

    return 0;
}