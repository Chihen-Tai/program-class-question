#include <stdio.h>
#include <stdlib.h>
int main()
{
    double *ptd;
    int array_size,i;

    double **a;
    double *b;
    int rows,cols;
    scanf("%d %d",&rows,&cols); //rows=7,col=5
    b=(double*)malloc(sizeof(double)*rows*cols);
    a=(double**)malloc(sizeof(double*)*rows);

    for(i=0;i<rows;i++)
    {
        a[i]=&b[i*cols];
    }
    for(i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            a[i][j]=(double)rand()/RAND_MAX;
        }
    }
    for(i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%.4f ",a[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);

    printf("How many doubles do you want to store?");
    scanf("%d",&array_size);
    ptd=(double *)malloc(array_size*sizeof(double));
    if(ptd==NULL)
    {
        printf("Memory allocation failed.\n");
        printf("%d\n",EXIT_FAILURE);
        exit(EXIT_FAILURE);
    }
    for(i=0;i<array_size;i++)
    {
        ptd[i]=(double)rand()/RAND_MAX;
    }
    for(i=0;i<array_size;i++)
    {
        if(ptd[i]>0.5)
        {
            printf("%d: %f\n",i,ptd[i]);
        }
    }

    free(ptd);

}