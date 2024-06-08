#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int *a,int n)
{
    int i,ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans+a[i];
    }
    return ans;
}
int sum_square(int *a,int n)
{
    int i,ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans+a[i]*a[i];
    }
    return ans;
}

int middle(int *a,int n)
{
    return a[n/2];
}

int main()
{
    int a[]={1,2,3,4};
    printf("sum=%d\n",sum(a,4));
    printf("sum_square=%d\n",sum_square(a,4));
    printf("middle=%d\n",middle(a,4));
}