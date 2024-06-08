#include <stdio.h>
int a[200005];
int n, m, k;
int count;
int sum = 0;
int main()
{
    void findSum(int n)
    {

        int i = 1;
        sum = 0;
        while (sum + i <= n)
        {
            sum += i;
            i++;
        }
        printf("%d\n", sum);
    }
    int main()
    {
        int t;
        scanf("%d", &t);
        while(t--)
        {
        scanf("%d %d %d", &n, &m, &k);

        findSum(m);

        return 0;
        }
        
    }
}