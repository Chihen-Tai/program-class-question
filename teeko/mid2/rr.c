#include <stdio.h>
typedef long long ll;
#define mod 1000000007
ll a, b, c, d;
ll res[200005];
void fib(int n, int res[]);

int main()
{
    ll n;

    while (scanf("%lld", &n) != EOF)
    {
        n = n % mod;
        fib(n, res);
        printf("%d\n", res[0]); // Remove the extra argument
    }
}

void fib(int n, int res[])
{
    if (n == 0)
    {
        res[0] = 0;
        res[1] = 1;
        return;
    }
    fib(n / 2, res); // Remove the extra argument

    a = res[0] % mod;
    b = res[1] % mod;

    c = (2 * b % mod - a % mod) % mod;

    if (c < 0)
    {
        c = c + mod;
    }

    c = (a * c) % mod;

    d = (a * a + b * b) % mod;

    if (n % 2 == 0)
    {
        res[0] = c% mod;
        res[1] = d % mod;
    }
    else
    {
        res[0] = d % mod;
        res[1] = (c+d) % mod;
    }
}