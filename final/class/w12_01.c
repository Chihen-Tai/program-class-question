#include <stdio.h>
int main()
{
    int data[16]={1,2,3,4,5,6,7,8,9,10,11,12};
    char *p;
    int *q;
    long long *r;

    p=(char *)data;
    q=(int *)data;
    r=(long long *)data;
    /*(char *)data 表示將 data 視為 char 型別的資料，並將其指派給 p。
    (int *)data 表示將 data 視為 int 型別的資料，並將其指派給 q
    (long long *)data 表示將 data 視為 long long 型別的資料，並將其指派給 r*/
    printf("%p %p %p\n",p,q,r);

        while(p < (char*)&data[12])
        {
            printf("%p %x\n",p,*p);
            ++p;
            //輸出的位址 每一個差1
            //%x 是用於輸出十六進位數值的指示符。
            /*000000000061FDB0 是 p 的位址，1 是該位址上的值。這是 data 陣列的第一個元素，其值為 1。
            接下來的三行，位址分別增加了 1、2 和 3，但值都是 0。
            這是因為 int 型別的 1 在記憶體中的表示形式為 01 00 00 00（在小端序系統中）。
            以 char 型別（即字節）訪問這個 int 時，你會看到一個 1，然後是三個 0。*/
        }
        printf("==========\n");

        while(q<(int *)&data[12])
        {
            //輸出的位址 每一個差4
            printf("%p %08x\n",q,*q);
            ++q;
        }
        printf("==========\n");

        while(r<(long long *)&data[12])
        {
            //輸出的位址 每一個差8
            printf("%p %016llx\n",r,*r);
            ++r;
        }
        printf("=============\n");

}
    