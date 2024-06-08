#include <stdio.h>
int a[200005];
typedef long long ll;
int n, m, k;
int count;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int How_many_gcd(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int current_gcd = a[i];
        for (int j = i; j < n; j++)
        {
            current_gcd = gcd(current_gcd, a[j]);
            if (current_gcd == k)
            {
                count++;
            }
        }
    }
    return count;
}
int s(int n)
{int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int T;
    scanf("%d", &T); // 讀取測試用例的數量

    while (T--)
    {
        int ones = 0;
        scanf("%d %d %d", &n, &m, &k);
        if (n * (n + 1) / 2 < m)
        {
            printf("-1\n");
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                ones++;
            }
        }
        
        printf("[%d]", ones);
        int n2 = n - ones;
        int sum=s(n2);
        while (sum > n2)
        {
            ones++;
            n2 = n - ones;
            sum=s(n2);
        }
        printf("[%d]", sum);
        for (int i = 0; i < n2; i++)
        {
            if (sum > m)
            {
                a[i] = 2 * k;
                sum--;
            }
            else
            {
                a[i] = k;
            }
        }
        for (int i = n2; i < n; i++)
        {
            a[i] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("[%d]", How_many_gcd(n));

        printf("\n");
    }

    return 0;
}
