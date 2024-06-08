#include <stdio.h>
#define MAX_N 1000000

int space[MAX_N];

int f1(int x)
{
    x=x+1;
    return x;
}
void f2(unsigned int index)
{
    space[index]=space[index]+1;
}

int main()
{
    int x=100;
    int y=500;
    unsigned int px;
    unsigned int py;
    x=f1(x);
    printf("%d\n",x);
    f1(x);
    printf("%d\n",x);

    px=12345;
    space[px]=100;
    
}