#include <stdio.h>
int f(int *p,int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=p[i];
    }
    return sum;
}
int ff(int *p,int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*p;
        p++;
    }
    return sum;
}
int g(int* p,int* end)
{
    int sum=0;
    while(p<end)
    {
        sum+=*p;
        printf("%d %p\n",*p,p);
        p++;
    }
    return sum;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",f(a,10));
    printf("%d\n",g(a,a+10));

    return 0;
}