#include <stdio.h>
#define MAXN 1000000

int space[MAXN];

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
    int y =500;
    unsigned int px;
    unsigned int py;
    
    x=f1(x);
    printf("%d\n",x);
    f1(x);
    printf("%d\n",x);

    px=12345;
    space[px]=x;
    f2(px);
    x=space[px];
    
    py=67890;
    space[py] =y;
    f2(py);
    y=space[py];
    printf("%d %d\n",x,y);

    return 0;
}