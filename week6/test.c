#include <stdio.h>
#include <string.h>
int wall[5005]={1,2,3,4,5,6,7,8,9,10};
int temp[5005];
int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    {
        temp[i] = wall[i];
        printf("%d ", temp[i]);
    }
    printf("\n");
    memcpy(temp, wall, sizeof(wall));
    for(int i=0;i<n;i++)
    {
        printf("%d ", temp[i]);
    }

}