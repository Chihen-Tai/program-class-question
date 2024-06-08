#include <stdio.h>
int b[1000][10000];
int main()
{
    int i, j;
    printf("Go!\n");
    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 10000; j++)
        {
            b[i][j] = 5 * i * j + j;
        }
    }
    printf("Done\n");
for (i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        printf("%6d",b[i][j]);
    }
    printf("\n");
}
}
