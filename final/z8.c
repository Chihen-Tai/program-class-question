#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
typedef struct{
    int day1;
    int day2;
}P;

P p[100005];

int cmp(const void*a,const void *b)
{
    P *pa=(P*)a;
    P *pb=(P*)b;
    int diff1=pa->day1-pb->day1;
    int diff2=pa->day2-pb->day2;
    return diff1-diff2;
}
int main()
{
    ll n,k;
    ll ans=0;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i].day1);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i].day2);
    }
    qsort(p,n,sizeof(p[0]),cmp);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",p[i].day1,p[i].day2);
    }
    int mark=n;
    for(int i=0;i<n;i++)
    {
        if(p[i].day1>p[i].day2)
        {
            mark=i;
            break;
        }
    }
    if(mark==n)
    {
        for(int i=0;i<n;i++)
        {
            ans+=p[i].day1;
        }
    }
    else if(mark>k)
    {
        for(int i=0;i<mark;i++)
        {
            ans+=p[i].day1;
        }
        for(int i=mark;i<n;i++)
        {
            ans+=p[i].day2;
        }
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            ans+=p[i].day1;
            printf("%d\n",p[i].day1);
        }
        for(int i=k;i<n;i++)
        {
            ans+=p[i].day2;
            printf("%d\n",p[i].day2);
        }
    }
    printf("%lld\n",ans);

}
