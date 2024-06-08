#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
ll a[2000005];
ll dis[2000005];
int main()
{
    ll n,k;
    ll current=0;
    ll ans=0;
    
    scanf("%lld %lld",&n,&k);
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=a[i+1]-a[i];
        //printf("%d ",dis[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(dis[i]>k)
        {
            printf("The Legend Falls.\n");
            return 0;//直接結束程式
        }
        else if(current+dis[i]>k)
        {
            ans++;
            current=0;
        }
        current+=dis[i];
    }
    printf("%d\n",ans);
}