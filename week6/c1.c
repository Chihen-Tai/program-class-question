#include <stdio.h>
int main()
{
    int data[16]={1,2,3,4,5,6,7,8,9,10,11,12};
    char *p;
    int *q;
    long long *r;
    p=(char*)data;//(char *)
    q=(int *)data;
    r=(long long *)data;
    
    printf("%p %p %p\n",p,q,r);
    while(p<&data[12])
    {
        printf("%p %x\n",p,*p);
        p++;
    }
    printf("\n");

    while(q<(int*)&data[12])
    {
        printf("%p %08x\n",q,*q);
        q++;
    }
    printf("\n");

    while(r<(long long*)&data[12])
    {
        printf("%p %016llx\n",r,*r);
        r++;
    }
}