#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int day1;
    int day2;
} P;

P p[100005];

int cmp(const void *a, const void *b)//struct的cmp function 
{
    //struct比較差距的cmp function(根據兩個陣列著差距進行小到大的排列)
    P *pa = (P *)a;
    P *pb = (P *)b;
    int diff1 = pa->day1 - pb->day1; // a b日期
    int diff2 = pa->day2 - pb->day2;
    return diff1 - diff2;
}
int main()
{
    long long n, k;
    long long ans = 0;
    scanf("%lld %lld", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].day1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].day2);
    }
    qsort(p, n, sizeof(p[0]), cmp);
    int mark=n;
    for (int i = 0; i < n; i++)
    {
        if (p[i].day1 > p[i].day2)
        {
            mark = i;
            break;
        }
    }
    //printf("%d\n",mark);
   
    if(mark==n)
    {
        //printf("mark=%d\n",mark);
        for(int i=0;i<n;i++)
        {
            ans+=p[i].day1;
        }
        
    }
    else if(mark>k)
    {
        //printf("2");
        for(int i=0;i<mark;i++)//mark開始p1比p2貴
        {
            ans+=p[i].day1;
        }
        for(int i=mark;i<n;i++)
        {
            ans+=p[i].day2;
        }
    }
    else if(mark<=k)
    {
        for(int i=0;i<k;i++)
        {
            ans+=p[i].day1;
            //printf("%d\n",p[i].day1);
        }
        for(int i=k;i<n;i++)
        {
            ans+=p[i].day2;
            //printf("%d\n",p[i].day2);
        }
    }
    printf("%lld\n", ans);//lld有差
}