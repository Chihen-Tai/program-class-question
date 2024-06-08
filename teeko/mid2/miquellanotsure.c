#include <stdio.h>
#include <string.h>
int n,k;
int a[200005];
int func(long long l,long long r)
{
    long long res=(r-l+1)*(r-l+2)/2;
    long long cnt=0;
    for(int i=l;i<=r;i++)
    {
        if(a[i]!=2*k)
        {
            cnt=0;
        }
        else
        {
            cnt++;
            res=res-cnt;
        }
    }
    return res;
}

int main()
{
    int ans;
    int last_1=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ans=ans+func(last_1+1,i-1);
            last_1=i;
        }
    }
    ans=ans+func(last_1+1,n-1);
}