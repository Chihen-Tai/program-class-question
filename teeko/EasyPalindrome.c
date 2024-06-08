#include <stdio.h>
int main()
{
    double a, p, q;
    int b, c, d;
    int sum1[10], sum2[10];
    scanf("%lf", &a);

    d = a * 1000;
    b = d % 1000; // b=456
    c = d / 1000; // c=123

    for (int i = 0; i <= 2; i++)
    {
        sum1[i] = b % 10;
        sum2[i] = c % 10;
        b = 0.1 * b;
        c = 0.1 * c;
    }
    p = 100 * sum2[0] + 10 * sum2[1] + sum2[2];
    q = 0.1 * sum1[0] + 0.01 * sum1[1] + 0.001 * sum1[2];
    printf("%.3lf", a + p + q);
    return 0;
}