#include <stdio.h>
typedef long long ll;
#define mod 1000000007
ll fib(ll n,ll ans,ll anspre)
{
    if(n==1)
    {
        return ans%mod;
    }
    else
    {
        return fib((n-1)%mod,(ans+anspre)%mod,ans%mod);
    }
}
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        n=n%mod;
        printf("%lld\n",fib(n,1,0));
    }
    
}