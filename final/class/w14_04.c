#include <stdio.h>
#include <stdlib.h>

void malloc_float2(float **p,unsigned int sz)
{
    *p = (float *)malloc(sizeof(float) * sz);
}

int main()
{
    float *ptr=NULL;
    int i;
    int n=100;

    malloc_float2(&ptr,n);

    for(int i=0;i<n;i++)
    {
        ptr[i]=(float)rand()/RAND_MAX;
        printf("%f\n",ptr[i]);
    }

    free(ptr);
    return 0;
}