#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[200005];
int n;
int upper_bound(int *a,int L,int R,int target)
{
    int mid;
    while(L<R)
    {
        mid=(L+R)/2;
        if(a[mid]>target)
        {
            R=mid;
        }
        else
        {
            L=mid+1;
        }
    }
    return R;
}
int lower_bound(int *a,int L,int R,int target)
{
    int mid;
    while(L<R)
    {
        mid=(L+R)/2;
        if(a[mid]>=target)
        {
            R=mid;
        }
        else
        {
            L=mid+1;//因為a[mid]<target所以L=mid不會是答案所以要+1就有可能=target
        }
    }
    return R;
}
int cmp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",upper_bound(a,0,n,x)-lower_bound(a,0,n,x));
    }
}