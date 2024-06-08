#include <stdio.h>
void swap(int* u,int* v);
void swap2(int* u,int* v);
int main()
{
    int y=2,z=5;
    printf("Before calling swap(), y = %d and z = %d\n",y,z);
    swap2(&y,&z);
    printf("After calling swap(), y = %d and z = %d\n",y,z);
    return 0;
}

void swap(int* u,int* v) // u=&y;v=&z
{
    int tmp;
    printf("In %s(), before swapping, u = %d and v = %d.\n",__func__,*u,*v);
    tmp=*u;
    //絕對不要寫成 tmp = u;，我們要交換的是位址裡儲存的資料，不是要交換位址。
    *u=*v;
    *v=tmp;
    printf("In %s(), after swapping, u = %d and v = %d.\n",__func__,*u,*v);
}

void swap2(int* u,int* v) // u=&y;v=&z
{
    int *tmp;
    printf("In %s(), before swapping, u = %d and v = %d.\n",__func__,*u,*v);
    tmp=u;
    u=v;
    v=tmp;
    printf("In %s(), after swapping, u = %d and v = %d.\n",__func__,*u,*v);
}