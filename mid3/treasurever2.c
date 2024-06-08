#include <stdio.h>
#define mod 1000000007
#define max 1000005
long long a[max], R[max], p[max];
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    p[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &R[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            p[i] = (p[i - 1] * a[i]) % mod;
        }
        else if (a[i] == 0)
        {
            p[i] = p[i - 1];
        }
        else
        {
            if (a[i - 1] >= 0)
            {
                p[i] = p[i - 1];
            }
            else
            {
                p[i] = ((p[i - 2] % mod) * (a[i - 1] % mod) * (a[i] % mod)) % mod;
                
            }
        }
    }
    for (int i = 0; i <q; i++)
    {

        printf("%lld\n", p[i]);
    }
}