#include <stdio.h>
long long int m, n, g = 0;
int k;
int a[200005];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%lld %lld %d", &n, &m, &k);

        if ((n * (n + 1) / 2) < m)
        {
            printf("-1\n");
            continue;
        }
        g = 0;
        while ((g * (g + 1) / 2) < m)
        {
            g++;
        }

        for (int i = 0; i < n; i++)
        {
            if (m == 0)
            {
                a[i] = 1;
            }
            else
            {
                a[i] = k;
                if (i < g * (g + 1) / 2 - m)
                {
                    if (i % 2 == 0)
                    {
                        a[i] = 2 * k;
                    }
                    else
                    {
                        a[i] = 3 * k;
                    }
                }
                else if (i > g - 1)
                {

                    a[i] = 1;
                }
            }

            if (i < n - 1)
            {
                printf("%d ", a[i]);
            }
        }
        printf("%d\n", a[n - 1]);
    }
    return 0;
}
