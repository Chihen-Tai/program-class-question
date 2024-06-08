#include <stdio.h>
float square(float y)
{
    return y * y;
}

double square2(double z)
{
    return z * z;
}
int main(void)
{
    float x;
    double z;
    scanf("%f", &x);
    scanf("%lf", &z);
    printf("%f square=%f\n", x, square(x));
    printf("%12.10f square=%12.10f\n", z, square2(z)); // scanf 函數用 %f 讀取浮點數，但使用 %lf 讀取雙精度浮點數。
    return 0;
}