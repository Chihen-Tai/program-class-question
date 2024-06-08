#include <stdio.h>
#define MAX_N 1000006

int n, q, l, r, m;
int a[MAX_N];
long long pre[MAX_N];

int main()
{
    scanf("%d %d", &n, &q);
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
        pre[0] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1] * (a[i - 1] >= 0);
        printf("%lld\n", pre[i]);
    }

    while (q--)
    {
        long long ans;
        // p[min(neg-1,l+m-1)]-p[l-1]
        scanf("%d %d %d", &l, &r, &m);
        ans = pre[l + m - 1] - pre[l - 1];
        printf("%lld\n", ans);
    }

    return 0;
}
