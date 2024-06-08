#include <stdio.h>
int n,t=0;
int s = 0;
int a[1000005];
int main()
{
   
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int in;
        scanf("%d", &in);

        for (int j = s; j < n; j++)
        {
            if (a[j] == in)
            {
                printf("%d ", j - s + 1);
                s = j + 1;
                t++;
                break;
            }
            else if (j >= n - 1)
            {
                printf("0 ");
                t++;
            }
        }
    }
    while(t<n)
    {
        printf("0 ");
        t++;
    }
}
