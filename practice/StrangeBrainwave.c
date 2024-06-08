#include <stdio.h>
int main()
{
    int a, b, n;
    int x = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {   x=0;
        scanf("%d %d", &a, &b);
        for (int i = 0; i < a; i++)
        {
            x = x ^ i;
        }
        if (x == b)
        {
            printf("%d\n", a);
        }
        else if ((x ^ b) != a)//6,1 6,7 6,4
        {
            printf("%d\n", a + 1);
        }
        else
        {
            printf("%d\n", a + 2);
        }
    }
}