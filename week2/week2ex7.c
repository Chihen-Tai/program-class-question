#include <stdio.h>

int main()
{
    int i, j;
    int a[11][11] = {0}; 
    /*int a[3][3]={{0,1,2},{1,2,3},{3,4,5}}
       0 1 2
       1 2 3
       3 4 5
       a[2][3]={{0,1,2},{1,2,3}}
             [0] [1] [2]
       a[0]   0   1   2
       a[1]   1   2   3
       */

    i = 0;
    while (i <= 10)
    {
        j = 0;
        while (j <= 10)
        {
            a[i][j] = (i+1) *( j+1);
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= 10)
    {
        j = 0;
        while (j <= 10)
        {
            printf("%3d ", a[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}