#include <stdio.h>
#include <stdlib.h>

float* malloc_float1(size_t sz)
{
    return (float *)malloc(sizeof(float) * sz);
}

void malloc_float2(float **q, size_t sz)
{
    *q = (float *)malloc(sizeof(float) * sz);
}

int main()
{
    float *ptr=NULL;
    int i;
    int n=100;

    malloc_float2(&ptr,n);

    for(i=0;i<n;i++)
    {
        ptr[i]=(float)rand()/RAND_MAX;
        printf("%f\n",ptr[i]);
    }
    
    free(ptr);

    return 0;
}