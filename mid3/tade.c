#include <stdio.h>
#define max 200005
long long int a[max], b[max], p[max];
int main()
{

    int j, temp = 0, x = 0, ser = -1, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        x = x ^ a[i];
    }
    for (int i = 0; i < 32; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((x & 1 << i) == (1 << i))
            {
                temp = i;
                break;
            }
        }
        if (temp != x)
        {
            printf("%d", a[i]);
            break;
        }
    }
}