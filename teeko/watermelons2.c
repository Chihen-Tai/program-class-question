#include <stdio.h>
#include <string.h>
#define N_max 200000

int n;
int a[N_max],b[N_max],p[N_max];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]),p[a[i]]=i;
    }// for (int i=0;i<n;i++)printf(:position of %d in a: %d\n",i,p[i]);
    for(int i=0;i<n;i++)
    {    
        scanf("%d",&b[i]);
    }
    int now_p=-1;
    for(int i=0;i<n;i++)
    {
        //printf("pricessing b[%d]=%d\n",i,b[i]);
        if(p[b[i]]>now_p)
        {
            //
            printf("%d " ,p[b[i]]-now_p);
            now_p=p[b[i]];
        }
        else
        {
            printf("0 ");
        }
    }
    return 0;


    
}