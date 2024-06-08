#include <stdio.h>
#define MAX_N 2000000

int n,q;
int arr[MAX_N+1];
long long p[MAX_N+1];

int main()
{
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        p[0]=0;
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+arr[i];
        }
        long long ans;
        int ans_a,ans_b;
        while(q--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            long long tmpans;
            if(b<a)
            {
                tmpans=p[n]-p[a-1]+p[b];
            }
            else
            {
                tmpans=p[b]-p[a-1];
            }
        }
    }
}