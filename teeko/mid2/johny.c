#include <stdio.h>
int ans=0;
int a[100005];
void permute(int index,int sum,int n,int k)
{
    
    if(index>=n||sum>=k)
    {
        if(sum==k)
        {
            ans++;
        }
        return;
    }
    permute(index+1,sum,n,k);
    permute(index+1,sum+a[index],n,k);
}
int getans(int i,int sum,int n,int k)
{
    if(sum==k)return 1;
    if(i==n)return 0;
    return getans(i+1,sum+a[i],n,k)+getans(i+1,sum,n,k);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",getans(0,0,n,k));
    return 0;
}