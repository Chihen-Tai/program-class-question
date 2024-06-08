#include <stdio.h>
int main()
{
    int a=0,b=0;
    int x[9][9];
    while(a<=8)
    {
        while(b<=8)
        {
            x[a][b]=(a+1)*(b+1);
            b++;
        }
        b=0;
        a++;
    }
    a=0,b=0;
      while(a<=8)
    {
        while(b<=8)
        {
            printf("%3d ",x[a][b]);
            b++;
        }
        printf("\n");
        b=0;
        a++;
    }

}