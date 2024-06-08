#include <stdio.h>
#include <string.h>
int main()
{
    int i, a, b;
    char str[20] = "";
    int r[1000005];
    r[0]=0;
    int n = 0;
    scanf("%d", &i);
    for (int j = 0; j < i; j++)
    {
        
        scanf("%d %d", &a, &b);
        for (int u=1; u <= b; u++)
        {
            sprintf(str,"%d",u);
            printf("%s\n",str);
            for(int m=0;m<=strlen(str);m++)
            {
                if (str[m]=='1')
                {
                    n=0;
                    n++;
                    r[u]=r[u-1]+n;
                }
            }
            
            
            
        }
        printf("%lld",r[b]-r[a-1]);
    }
}
