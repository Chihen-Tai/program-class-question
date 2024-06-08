#include <stdio.h>

long long fpw(long long int x, long long int y, long long int m)
{
    if (y == 0)
    {
        return 1 % m;
    }
    x = x % m;
    long long int tmp = fpw(x, y / 2, m);
    long long int res = tmp * tmp % m;
    // int res=fpw(x,y/2)*fpw(x,y/2);會比較慢
    if (y % 2 == 1)
    {
        res = res * x % m;
    }
    printf("%lld %lld \n", res,x);
    return res;
}
long long fpw2(long long x, long long y, long long m)
{
    x = x % m;
    long long res = 1 % m;
    while (y)
    {
        if (y % 2 == 1)
        {
            res = res * x % m;
        }
        y = y / 2;
        x = x * x % m;
    }
    return res;
}
long long fpw3(long x, long y, long z)
{
}
int main()
{
    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    printf("%lld\n", fpw(x % z, y, z));
    // printf("%lld\n",fpw(x,y,z));
}