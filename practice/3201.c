#include <stdio.h>
long long int a[100005];
long long int b[200005];//陣列在裡面和外面的結果不一樣

int main()
{
    
    int n, j;
    
    scanf("%d %d", &n, &j);
    for (int i = 0; i < j; i++)
    {
        scanf("%lld", &a[i]);
        //b[a[i]] = 1;
    }

    for (int i = (j - 1); i >= 0; i--)
    {
        if (b[a[i]] != 1)
        { 
            printf("%lld\n", a[i]);
            b[a[i]] = 1;
        }
            //printf("%lld\n", a[i]);
           
    }

    for (int i = 1; i <= n; i++)
    {
        if (b[i] != 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}