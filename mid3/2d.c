#include <stdio.h>
#include <stdlib.h> // Add this line
typedef long long ll;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        ll a[1002];
        ll b[1002][1002];
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            b[1][i]=a[i];
        }
        ll prefix[1002][1002];
        for(int i=1;i<=n;i++)
        {
            prefix[i][1]=0;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                b[i][j]=b[i-1][j+1]+b[i-1][j];
                int x=(j%2==0)?1:-1;
                prefix[i][j]=prefix[i][j-1]+x*b[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                printf("%lld ",prefix[i][j]);
            }
            printf("\n");
        }
    }
}