#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    i=i^j;//i=i^j
    j=i^j;//(i^j)^j=j
    i=i^j;//i^((i^j)^j)=i
    printf("(i,j) = (%d, %d)\n",i,j);
    return 0;
}