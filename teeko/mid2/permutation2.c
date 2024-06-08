#include <stdio.h>
#include <string.h>
int n, k;
int a[100005];
void re(int len, int start)
{
    if (len == k + 1)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", a[i]); // Add a newline character after printing each number
        }
        printf("\n");
        return;
    }
    else
    {
        for (int i = start; i <=n; i++)//n=5
        {
            a[len] = i;
            re(len + 1, i + 1);
        }
    }
}
int main()
{
    //scanf("%d %d", &n, &k);
    n=5;k=3;
    re(1, 1);
}