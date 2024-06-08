#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
ll a[200005];
ll dis[200005];
int main()
{
    int n,k;
    a[0]=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=a[i+1]-a[i];
    }
    int current=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(dis[i]>k)
        {
            printf("The Legend Falls.\n");
            return 0;
        }
        else if(current+dis[i]>k)
        {
            ans++;
            current=0;
        }
        current+=dis[i];
    }
    printf("%d\n",ans);
    return 0;
    
}