#include <stdio.h>
int main()
{
    int i,j;
    i=1;
    while (i<=9)
    {
        printf("i=%d: ",i);
            j=1;
            while(j<=9-i)
            {
                printf("    ");
                j++;
            }
            while (j<=9)
            {
                printf("%3d ",i*j);
                j++;
            }
            printf("\n");
            i++;
    }

}