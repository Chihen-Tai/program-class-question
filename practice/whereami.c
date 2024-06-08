#include <stdio.h>
typedef long long ll;
#define DIGIT3 (1000ll)
#define DIGIT9 (DIGIT3*DIGIT3*DIGIT3)
#define DIGIT18 (DIGIT9*DIGIT9)
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int x,y,z,q;    
        scanf("%d.%d %d.%d",&x,&y,&z,&q);
        long long f9=x*q+y*z;
        long long f18=y*q+(f9%DIGIT9)*DIGIT9;
        long long d =x*z+f9/DIGIT9;
        d+=f18/DIGIT18;
        f18%=DIGIT18;
        printf("%lld.%018lld\n",d,f18);
    }
}