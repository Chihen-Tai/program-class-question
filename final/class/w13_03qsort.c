#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
void qsort( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) )
ptr
指向要排序的陣列的起始位置的指標
count
在陣列中有幾個元素要排序
size
在陣列中每個元素的大小，以 byte 為單位
comp
比較用的函數，回傳正數代表第一個參數比第二個參數big，回傳負數代表第一個參數比第二個參數small，回傳0代表兩個參數相等
*/
#define SIZE 10
int com(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int compare_int(const void *a, const void *b)
{
    const int *va = (const int *)a;
    const int *vb = (const int *)b;
    return *va - *vb;
}
int compare_char(const void *a, const void *b)
{
    const char *va = (const char *)a;
    const char *vb = (const char *)b;
    return strcmp(va, vb);
}
int compare_double(const void *a, const void *b)
{
    const double *da = (const double *)a;
    const double *db = (const double *)b;
    return (*db<*da) - (*db>*da);//*da - *db;
}
int compare_double_2(const void *a, const void *b)
{
    const double *da = (const double *) a;
    const double *db = (const double *) b;
    if (*da > *db) return 1;
    else if (*da < *db) return -1;
    else return 0;
    //return (*db < *da) - (*db > *da);
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
    printf("After sorting:\n");
    qsort(data1, SIZE, sizeof(int), compare_int);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\n");
    printf("Before sorting:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", data2[i]);
    }
    printf("\n");
    printf("After sorting:\n");
    qsort(data2, SIZE, sizeof(double), compare_double);
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", data2[i]);
    }
    printf("\n");
    char strs[SIZE][4] = {
        "aab", "abc", "aaa", "abb", "acb",
        "aab", "abc", "aaa", "abb", "acb"};//'a''a''a''0' 4byte
    printf("Before sorting:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%s ", strs[i]);
    }
    printf("\n");
    printf("After sorting:\n");
    qsort(strs, SIZE, sizeof(char)*4, compare_char);//byte需要乘以4
    for(i=0;i<SIZE;i++)
    {
        printf("%s ",strs[i]);
    }
}