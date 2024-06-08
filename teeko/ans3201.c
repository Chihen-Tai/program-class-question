#include <stdio.h>

int a[100005];
int is[200005];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = m - 1; i >= 0; i--)
    {
        if (is[a[i]] != 1)
        {
            printf("%d\n", a[i]);
            is[a[i]] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (is[i] != 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}