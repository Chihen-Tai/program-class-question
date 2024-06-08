#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

void mysort(void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *))
{
    qsort(ptr, count, size, comp);
}

int compare_int(const void *a, const void *b)
{
    const int *va = (const int *)a;
    const int *vb = (const int *)b;
    return *va - *vb;
}

int compare_double(const void *a, const void *b)
{
    const double *da = (const double *)a;
    const double *db = (const double *)b;
    return (*db < *da) - (*db > *da);
}
int main()
{
    int data1[SIZE];
    double data2[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        data1[i] = rand() % SIZE;
        data2[i] = (double)rand() / RAND_MAX;
    }
    printf("Before sorting:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%f ", data2[i]);
    }
    printf("\n");
    mysort(data1, SIZE, sizeof(int), compare_int);
    mysort(data2, SIZE, sizeof(double), compare_double);
    printf("After sorting:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%f ", data2[i]);
    }
    printf("\n");
    return 0;
}
void *addr(char *r, size_t size, int idex)
{
    return r + size * idex;
}
//函數返回一個指向所需元素的地址的指針
void swap(char* r,size_t size ,int idx1,int idx2)
{
    int i;
    char tmp;
    char *r1=(char*) addr(r,size,idx1);
    char *r2=(char*) addr(r,size,idx2);
    for(i=0;i<size;i++)
    {
        tmp=*r1;
        *r1=*r2;
        *r2=tmp;
        r1++;
        r2++;
    }
}

void mysirt(void *p,size_t count,size_t size,int (*comp)(const void *,const void *))
{
    int i=1,j;
    int tmp;
    char*pc=(char*)p;

    while(i<count)
    {
        j=i;
        while(j>0&&comp(addr(pc,size,j-1),addr(pc,size,j))>0)
        {
            swap(pc,size,j,j-1);
            j--;
        }
        i++;
    }
}