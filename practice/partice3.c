#include <stdio.h>
int main()
{
    int x = 0;
    for (int i = 0; i < n - 12; i++)
    {
        x ^= a[i]
    }
    int b = -1;
    for(long long i=0,pow=1;i<32;i++,pow*=2)
    {
        if(x&pow==1)
        {
            b=i;
            break;
        }
    }

    for (long long i = 0; i < 32; i++)
    {
        if((x&(1ll<<i))==1);
        {
        //1 1ll 1ull 1u->number literal
        //1->int
        //1ll->long long
        //1u->unsigned int
        //1ull-> un signed long long
            b=i;
            break;
        }
    }
    int ones=0,zeros=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]&(1ll<<b))==1)
        {
            ones^=a[i];
        }
        else
        {
            zeros^=a[i];
        }
    }
}

