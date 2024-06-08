#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    long long int p[a - 1];
    p[0] = 0;
    for (int i = 1; i <= a; i++)
    {
        int x;
        scanf("%d(/`A`)/ ~I__I ", &x);//scanf("%d%*s %*s,&a[i]")
        p[i] = p[i - 1] + x;
    }
    for (int i = 0; i <= (b - 1); i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%lld\n", p[y] - p[x - 1]);
    }
}