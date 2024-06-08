#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
ll a[2000005];
ll p[2000005];
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
        ll n, q, k, ans = 0;
        p[0] = 0;
        scanf("%lld %lld %lld", &n, &q, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for (int i = 1; i <= n; i++)
        {
            if (i < k)
            {
                p[i] = p[i - 1] + a[i - 1];
            }
            else
            {
                p[i] = p[i - k] + a[i - 1];
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (q >= p[i])
            {
                ans = i;
            }
        }
        printf("%lld\n", ans);
    }
}