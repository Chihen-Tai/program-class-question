#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[200005];
int n, m;
int binary_search(int L, int R)
{
    while (L < R)
    {
        int day = (L + R) / 2;
        if (page(day) >= m)
        {
            R = day;
        }
        else
        {
            L = day + 1;
        }
    }
    return L;
}
int page(int day)
{
    int sum = 0;
    for (int i = 0; i < day; i++)
    {
        sum += a[i];
    }
    int count = 0, c = 1; // c效力遞減
    for (int i = day; i < n; i++)
    {
        count++;
        if (a[i] > c)
        {

            sum += (a[i] - c);
        }
        if (count == day)
        {
            count = 0;
            c++;
        }
    }
    return sum;
}
/*
5 8
3 2 2 1 1
*/
int main()
{
    int T=1;
    //scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int L = 1, R = n + 1, ans = -1;
        while (L < R)
        {
            int day = (L + R) / 2;
            if (page(day) >= m)
            {
                ans = day;
                R = day;
            }
            else
            {
                L = day + 1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}