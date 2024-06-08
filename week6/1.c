#include <stdio.h>
void swap(int *u,int *b);
int main()
{
    int y=2,z=5;
    printf("y=%d,z=%d\n",y,z);
    swap(&y,&z);
    printf("y=%d,z=%d\n",y,z);
}
void swap(int *u,int *b)
{
    int temp;
    temp=*u;
    *u=*b;
    *b=temp;
}