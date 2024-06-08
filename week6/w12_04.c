#include <stdio.h>
//two dimensional array
/*
int a[3][4];
-----------------------------------------
| a[0][0] | a[0][1] | a[0][2] | a[0][3] |
-----------------------------------------
| a[1][0] | a[1][1] | a[1][2] | a[1][3] |
-----------------------------------------
| a[2][0] | a[2][1] | a[2][2] | a[2][3] |
-----------------------------------------
int a[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
*/
typedef int row_vector [5];
row_vector matrix[4];
// int matrix[4][5];
int main()
{
    int a[][4]={{1,2,3,4},{5,6},{9,10,11,12}};
    int b[][4]={1,2,3,4,5,6,9,10,11,12};

    int i,j;

    printf("a:      %lu bytes\n", sizeof(a));
    printf("a[0]:   %lu bytes\n", sizeof(a[0]));
    printf("a[0][0]:%lu bytes\n", sizeof(a[0][0]));

    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d ",b[i][j]);
        }
        printf("\n");
    }
}
