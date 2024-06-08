#include <stdio.h>
#include <string.h>

int a[200005];
int n, k;

int main()
{
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    int ans = 0;
    for (int i = 30; i >= 0; i--)
    {
        int ibit = (1 << i);
        
        
        for (int j = 0; j < n; j++)
        {
            if ((ibit & a[j]) != 0)
            {
                count++;
                printf("%d\n", count);
            }
        }
        
        if (count < k)
        {
            continue;
            printf("%d %d\n", count, k);
        }
        else if(count>0)
        {
            k=k-count;
            ans += ibit;
            printf("%d \n",k);
        }
    }
    
    printf("%d\n", ans);
}
