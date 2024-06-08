#include <stdio.h>
int main()
{

    int a = 1, b, c = 0, x;
    scanf("%d",&x);
    while (c <= x)
    {
        c = 0;
        while (a / 3 > 0 || a == 1)
        {
            b = a;
            if (a / 3 > 0 || a == 1)
            {
                c = c + b;
                a = a / 3;
            }
            else
            {
                printf("%d",a);
            }
        }
        a++;
    }

    printf("%d", a);
}