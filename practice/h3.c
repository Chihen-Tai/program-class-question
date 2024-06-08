#include <stdio.h>
long long int a[100005];
int main()
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        x^=a[i];
    }
    int b=-1;
    for(long long i=0,pow=1;i<32;++i,pow*=2)
    {
        if(x&pow==1)
        {
            b=i;
            break;
        }
    }
    return 0;
}
