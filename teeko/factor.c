#include <stdio.h>
int main()
{
    int arr[100005] = {0};
    int n, a, b, time = 0, x = 0;
    int j = 1;
    scanf("%d", &n);
    while (n--)
    {
        int max=arr[0],g;
        scanf("%d %d", &a, &b);
        for (a; a < b; a++)
        {
            for (j = 1; j < a; j++)
            {
                if (a % j == 0)
                {
                    time++;
                }
            }

            arr[x] = time;
            time = 0;
            printf(" %d %d ", arr[x],x);
            x++;
            for(int i=0;i<x;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
        }
        //printf("%d",max);
    }
}