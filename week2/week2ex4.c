#include <stdio.h>
int main(void)
{
    int x, n;
    int i, sum;
    int a[50];//0-49
    printf("how many number? (n<50)");
    scanf("%d", &n);
    i = 0;
    while (i < n)
    {
        printf("input a[%d]: ", i);
        scanf("%d", &x);

        printf("the number is %d\n", x);

        a[i] = x;

        i = i+1;//不能用i++
    }
    i = 0;

    sum = 0;

    while (i < n)
    {
        printf("%d + ", a[i]);
        sum = sum + a[i];
        i++;
    }
    printf(" \b\b= %d\n", sum); //\b\b退後兩格
    return 0;
}