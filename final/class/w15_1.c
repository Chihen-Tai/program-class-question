#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptd;
    int arr_size,i,j;
    double **a;
    double *b;
    int rows,columns;

    scanf("%d %d",&rows,&columns);
    b=(double *)malloc(sizeof(double)*columns*rows);
    a=(double **)malloc(sizeof(double *)*rows);
    for(i=0;i<rows;i++)
    {
        a[i]=&b[i*columns];
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            a[i][j]=(double)rand()/RAND_MAX;
            (&b[i*columns])[j]*(&b[i*columns]+j)*(b+i*columns+j);
        }
    }
    free(a);
    free(b);
    printf("How many doubles do you want to store?");
    scanf("%d",&arr_size);
    ptd=(double *)malloc(arr_size*sizeof(double));

    if(ptd==NULL)
    {
        printf("Memory allocation failed.\n");
        printf("%d\n",EXIT_FAILURE);
        exit(EXIT_FAILURE);
    }

    for(i=0;i<arr_size;i++)
    {
        ptd[i]=(double)rand()/RAND_MAX;
    }

    for(i=0;i<arr_size;i++)
    {
        if(ptd[i]>0.5)
        {
            printf("%d: %f\n",i,ptd[i]);
        }
    }

    free(ptd);
}