#include <stdio.h>
int g[100005];
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int k;
    scanf("%d", &k);
    while (k--)
    {
        int n, temp = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &g[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                //printf("gcd(%d,%d)=%d\n", g[i], g[j], gcd(g[i], g[j]));
                if (gcd(g[i], g[j]) > temp && i != j)
                {
                    temp = gcd(g[i], g[j]);
                }
            }
        }
        printf("%d\n", temp);
    }
}
