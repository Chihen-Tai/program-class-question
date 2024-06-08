#include <stdio.h>
int a[200005];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int k,x=0,serch=-1;
        scanf("%d",&k);
        for(int i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
            x=x^a[i];
        }
        for(int i=0;i<32;i++)
        {
            if((x&(1<<i))!=0)
            {
                serch=i;
                break;
            }
        }
        int ones=0,zero=0;
        for(int i=0;i<k;i++)
        {
            if((a[i]&(1<<serch))!=0)
            {
                ones=ones^a[i];
            }
            else
            {
                zero=zero^a[i];
            }
            
        }
        if(ones<zero)
        {
            printf("%d %d\n",ones,zero);
        }
        else
        {
            printf("%d %d\n",zero,ones);
        }
        
    }
}