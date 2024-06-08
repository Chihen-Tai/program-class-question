#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
ll a[2000005];
ll pre[2000005];

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        ll n, p, k;
        int ans = 0;
        pre[0] = 0;
        scanf("%lld %lld %lld", &n, &p, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(a[0]), cmp);

        for (int i = 1; i <= n; i++)
        {
            if (i - k >= 0)
            {
                pre[i] = a[i-1] + pre[i - k];
            }
            else
            {
                pre[i] = pre[i-1]+a[i-1];
            }
        }
        printf("\n");
        for(int i=0;i<=n;i++)
        {
            if(p>=pre[i])
            {
                ans = i;
            }
        }
        printf("%d\n", ans);

      
    }
    return 0;
}
