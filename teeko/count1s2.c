#include <stdio.h>
int count1(int i)
{
    int ret=0;
    while(i)
    {
        ret+=((i%10)==1);
        i/=10;
    }
    return ret;
}
#define N_MAX 1000001

int pre[N_MAX];
int main()
{
    int a,b;
    
    for(int i=1;i<=N_MAX;i++)
    {
        int ones=count1(i);
        pre[i]=ones+pre[i-1];
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",pre[b]-pre[a-1]);
    }
}