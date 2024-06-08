#include <stdio.h>
int main()
{
    int total;
    scanf("%d", &total);
    int sum=0,cap=0,buy=0;
    while(sum<total)
    {
        sum++;
        cap++;
        buy++;
        if(cap%3==0)
        {
            sum++;
            cap=1;
        }
    }
    printf("%d\n",buy);
}