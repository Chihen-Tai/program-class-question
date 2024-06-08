#include <stdio.h>
int main()
{
    int a,b,c=1,d=1;
    scanf("%d %d",&a,&b);
    while (c<=a)
    {
        while(d<=b)
        {
            printf("*");
            d++;
        }
        d=1;
        printf("\n");
        c++;
    }
    

}