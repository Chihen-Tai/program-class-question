#include <stdio.h>
#include <string.h>
#include <stdio.h>
typedef struct
{
    double l, r;
} line;

line s[200005];

int cmp(const void *a, const void *b)
{
    line A = *(line *)a;
    line B = *(line *)b;
    if (A.l != B.l)
        return A.l - B.l;
    return A.r - B.r;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        for (int i = 0; i < q; i++)
        {
            scanf("%lf %lf", &s[i].l, &s[i].r);
        }
        qsort(s, q, sizeof(line), cmp);
        double tol = 0, L = 0, R = 0;
        for (int i = 0; i < q; i++)
        {
            if (s[i].l <= R)//確認沒有分段
            {
                if (s[i].r > R)//如果沒滿足直接下個條件
                {
                    R = s[i].r;
                }
            }
            else
            {
                tol += (R - L);
                L = s[i].l;
                R = s[i].r;
            }
        }
        tol += (R - L);
        printf("%.6f\n", 1 - tol / n);
    }
}