#include <stdio.h>
double square(double q);

int main(void)
{
    double x;                                        // 用於64bits float用於 32 bits
    x = 3.2150001;                                   //%f for floating point format
    printf("%.8f square is %10.8f\n", x, square(x)); //%10留十位元 五格
    return 0;
}

double square(double x)
{
    double y = x;
    x = x / 2;
    return y * y;
}
// float 的精確度只有保證六個有效位數，因此超過的位數就不一定正確。如果用 double 的話可以保證到 十個有效位數