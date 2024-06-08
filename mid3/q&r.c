#include <stdio.h>
#include <string.h>
int n,m;
int qv[100],qld[100],qrd[100];
int rv[100],rld[100],rrd[100];
int map[100][100];
int fun(int ind,int queen,int rook)
{
    if(ind>=(n+m))
    {
        return 1;
    }
    int ans=0;
    for(int i=0;i<n+m;i++)
    {
        if(queen<n&&!qv[i]&&!qld[ind-i+(n+m)]&&!qrd[ind+i]&&!rv[i]&&!rld[ind-i+(n+m)]&&!rrd[ind+i])
        {
            qv[i]=1;
            qld[ind-i+(n+m)]=1;
            qrd[ind+i]=1;
            ans += fun(ind+1,queen+1,rook);
            qv[i]=0;
            qld[ind-i+(n+m)]=0;
            qrd[ind+i]=0;
        }
        if(rook<m&&!qv[i]&&!qld[ind-i+(n+m)]&&!qrd[ind+i]&&!rv[i])
         {
            rv[i]+=1;
            rld[ind-i+(n+m)]+=1;
            rrd[ind+i]+=1;
            ans += fun(ind+1,queen,rook+1);
            rv[i]-=0;
            rld[ind-i+(n+m)]-=0;
            rrd[ind+i]-=0;
        }
    }
    return ans;
}

int main()
{
    scanf("%d %d",&n,&m);
    printf("%d",fun(0,0,0));
}