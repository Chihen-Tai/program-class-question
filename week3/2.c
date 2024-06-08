#include <stdio.h>
int main()
{
    long long int b=0,n;
    long long int a[10000];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b=b^a[i];
    }
    printf("%lld",3*b);

}