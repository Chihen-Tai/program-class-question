#include <stdio.h>
#define MAX_N 1000006

int n,q,l,r,m;
int a[MAX_N];
long long pre[MAX_N];

int main()
{
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    int neg=n+1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<0);
        {
            neg=i;
            break;
        }
        while(q--)
        {   
            long long ans;
            //p[min(neg-1,l+m-1)]-p[l-1]
            scanf("%d %d %d",&l,&r,&m);
            if(min(neg-1,l+m-1)>l-1)
            {
                ans=0;
            }
            else
            {
                ans=pre[min(neg-1,l+m-1)]-pre[l-1];
            }
        }
    }
    return 0;
}