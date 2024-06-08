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
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    permute(0,0,n,k);
    printf("%d\n",ans);
    return 0;
}