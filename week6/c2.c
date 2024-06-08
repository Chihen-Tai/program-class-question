#include <stdio.h>
int main()
{
    /*a[i]=*(a+i)
    Z&a[i]=(a+i)*/
    char data[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    char *p;
    int i;

    p=data;

    i=0;
    while(i<12)
    {
        printf("%p %d\n",&data[i],data[i]);
        printf("%p %d\n",p+i,*(p+i));
        printf("%p %d\n",p+i,i[p]);
        printf("%p %d\n",i+data,*(data+i));
        printf("%p %d\n",&p[i],p[i]);
        i++;
    }

    return 0;
}