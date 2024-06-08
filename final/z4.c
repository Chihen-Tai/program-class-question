#include <stdio.h>
#define mod 1000000007
typedef long long ll;
typedef struct{

    ll data[3][3];

}Mat;

Mat I={{{1,0,0},{0,1,0},{0,0,1}}};

Mat matmul(Mat x,Mat y)
{
    Mat res;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            res.data[i][j]=0;
            for(int k=0;k<3;k++)
            {
                res.data[i][j]+=x.data[i][k]*y.data[k][j];
                res.data[i][j]%=mod;
            }
        }
    }
    return res;
} // Add the missing function declaration for matmul

Mat fpw(Mat x,ll n)
{
    if(n==0)
    {
        return I;
    }
    Mat res=I;
    if(n%2==1)
    {
        res=matmul(x,res);
    }
    Mat tmp=fpw(x,n/2);
    return  matmul(res,matmul(tmp,tmp));
    
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll x;
        scanf("%lld",&x);
        if(x==1)
        {
            printf("1\n");
            continue;
        }
        else if(x==2)
        {
            printf("12\n");
            continue;
        }
        else if(x==3)
        {
            printf("13\n");
            continue;
        }
        else
        {
            Mat p={{{1,2,1},{1,0,0},{0,1,0}}};
            ll n=x-3;
            Mat res=fpw(p,n);
            ll ans=(13*res.data[0][0]+12*res.data[0][1]+res.data[0][2])%mod;
            printf("%lld\n",ans);
        }
    }
}
