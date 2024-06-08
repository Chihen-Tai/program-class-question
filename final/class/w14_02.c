#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, **b, i, j, rows, columns;

    scanf("%d %d", &rows, &columns);

    a = (int *)malloc(sizeof(int) * rows * columns);
    for (int i = 0; i < rows * columns; i++)
    {
        a[i] = i;
    }
    b = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        b[i] = &a[i * columns];
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }
    

    free(b);
    free(a);

    return 0;
}