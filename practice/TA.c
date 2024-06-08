#include <stdio.h>
int a[200005];
int t, n;
int main()
{   
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            x = x ^ a[i];
        }
        int b = -1;
        for (long long i = 0; i < 32; i++)
        {
            if ((x & (1ll << i)) != 0)
            {
                b = i;
                break;
            }
        }
        int ones = 0, zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & (1ll << b)) != 0)
            {
                ones = ones ^ a[i];
            }
            else
            {
                zeros = zeros ^ a[i];
            }
        }
        if (ones < zeros)
        {
            printf("%d ", ones);
            printf("%d\n", zeros);
        }
        else
        {
            printf("%d ", zeros);
            printf("%d\n", ones);
        }
    }
}