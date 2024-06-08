#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_Q 100005
int n, q;
typedef struct _INTERVAL
{
    double l, r;
} Interval;

Interval line[MAX_Q];

int cmp(const void*a,const void*b)
{
    Interval A=*(Interval*)a;
    Interval B=*(Interval*)b;
    if(A.l!=B.l) return A.l-B.l;
    return A.r-B.r; 
}
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        double tol=0;
        scanf("%d %d", &n, &q);
        for (int i = 0; i < q; i++)
        {
            scanf("%lf %lf", &line[i].l, &line[i].r);
        }
        qsort(line, q, sizeof(Interval), cmp);
        for(int i=0;i<n;i++)
        {
            printf("%lf %lf",line[i].l,line[i].r);
        }
        double l=0,r=0;
        for(int i=0;i<q;i++)
        {
            if(line[i].l<=r)//看是否有重疊
            {
                if (line[i].r > r) //看是否有超出範圍
                {
                    r = line[i].r;
                }
            }
            else
            {
                tol+=(r-l);
                l=line[i].l;
                r=line[i].r;
            }
        }
        tol+=(r-l);
        printf("%.6lf\n",1-tol/n);
    }
}