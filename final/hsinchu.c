#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mod 1000000007
typedef long long ll;
typedef struct
{
    ll data[2][2];
} Mat;

Mat I = {{{1, 0}, {0, 1}}};

Mat matmul(Mat x, Mat y)
{
    Mat res = I;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res.data[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res.data[i][j] += (x.data[i][k] %mod)* (y.data[k][j] % mod);
                res.data[i][j] %= mod;
            }
        }
    }
    return res;
}

Mat fpw(Mat x, ll y)
{
    if (y == 0)
        return I;
    Mat res = I;
    if (y % 2 == 1)
        res = matmul(res, x);
    Mat tmp = fpw(x, y / 2);
    tmp = matmul(tmp, tmp);
    return matmul(res, tmp);
}

int main()
{
    ll x;
    while ((scanf("%lld", &x)) != EOF)
    {
        if (x == 1)
        {
            printf("1\n");
            continue;
        }
        if (x == 2)
        {
            printf("1\n");
            continue;
        }
        Mat a = {{{1, 1}, {1, 0}}};
        ll n = x - 2; 
        Mat res = fpw(a, n);
        ll ans = (res.data[0][0]%mod + res.data[0][1]%mod) % mod;
        printf("%lld\n", ans);
    }
    return 0;
}
