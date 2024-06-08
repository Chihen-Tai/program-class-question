#include <stdio.h>
#include <string.h>
#define MAX_N 200005
int a[MAX_N], b[MAX_N], pos[MAX_N] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        memset(pos, 0/*or -1*/, sizeof(pos));
        /*
        for(int i=0;i<MAX_N;i++){
            pos[i] = 0;
        }
        */
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i=0,a_now=0;i<n;i++)
        {
            if(pos[b[i]]==1)
            {
                printf("%d ",0);
            }
            else
            {
                int count=0;
                while(a_now<n)
                {
                    pos[a[a_now]]=1;
                    if (a[a_now]==b[i])
                    {
                        count++;
                        a_now++;
                        break;
                    }
                    count++;
                    a_now++;
                }
                printf("%d",a_now);
                
            }
        }
    }
}
