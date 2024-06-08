#include <stdio.h>
#define mod 1000000007
typedef long long ll;
//matrix fast power
typedef struct
{
    ll data[3][3];//要ll
} Mat;

Mat I = {{{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}};

Mat matmul(Mat x, Mat y);

Mat fpw(Mat x, ll y)
{
    if (y == 0)
        return I;
    Mat res = I;
    if (y % 2 == 1)
        res = matmul(res, x);
    Mat tmp = fpw(x, y / 2);
    return matmul(res, matmul(tmp, tmp));
}

Mat matmul(Mat x, Mat y)
{
    Mat res;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res.data[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                res.data[i][j] += x.data[i][k] * y.data[k][j];
                res.data[i][j] %= mod;
            }
        }
    }
    return res;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        ll p;
        scanf("%lld", &p);
        if(p==1)
        {
            printf("1\n");
            continue;
        }
        if(p==2)
        {
            printf("12\n");
            continue;
        }
        if(p==3)
        {
            printf("13\n");
            continue;
        }
        Mat x = {{{1, 2, 1}, {1, 0, 0}, {0, 1, 0}}};
        ll n=p-3;
        Mat res = fpw(x, n);
        ll ans=(res.data[0][0]*13+res.data[0][1]*12+res.data[0][2]*1)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
