#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int x[2005];
    int y[2005];
}plane;

int n,r;
plane xy;
int visit[20005];

int distance(int i,int j)
{
    return (xy.x[i]-xy.x[j])*(xy.x[i]-xy.x[j])+(xy.y[i]-xy.y[j])*(xy.y[i]-xy.y[j]);
}

int dfs(int now)
{
    int res=1;
    visit[now]=1;
    for(int i=0;i<n;i++)
    {
        if(distance(now,i)<=r*r&&visit[i]==0)
        {
            res=res+dfs(i);
            //printf("%d",res);
        }
    }
    return res;
}
int main()
{
    scanf("%d %d",&n,&r);
    int group1=0,group2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&xy.x[i],&xy.y[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(visit[i]==0)
        {
            if(dfs(i)>=2)
            {
                group1++;
            }
            else
            {
                group2++;
            }
        }
    }
    printf("%d %d",group2,group1);
}