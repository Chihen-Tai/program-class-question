#include <stdio.h>
#include <string.h>
int n,k;
int a[200005];
int main()
{
    int ans=1000;
    int p;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",&p);
            if(p<ans)
            {
                //printf("%d\n",p);
                ans=p;
            }
        }
    }
    printf("%d",ans);
   
    
}