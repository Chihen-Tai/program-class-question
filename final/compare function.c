#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int day1;
    int day2;
} P;

typedef struct _INTERVAL
{
    double l, r;
} Interval;

int cmp_int (const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int cmp_float (const void*a,const void*b)
{
    return *(float*)a-*(float*)b;
}
int cmp_double (const void*a,const void*b)
{
    return *(double*)a-*(double*)b;
}
int cmp_string(const void*a,const void*b)//根據strlen進行排序
{
    return string((char* a))-strlen((char* b));
}
int cmp_struct_diff(const void *a, const void *b)//struct的cmp function 
{
    //struct比較差距的cmp function(根據兩個陣列著差距進行小到大的排列)
    P *pa = (P *)a;
    P *pb = (P *)b;
    int diff1 = pa->day1 - pb->day1; // a b日期
    int diff2 = pa->day2 - pb->day2;
    return diff1 - diff2;
}
int cmp_struct_twoelement(const void*a,const void*b)
{
    Interval A=*(Interval*)a;
    Interval B=*(Interval*)b;
    if(A.l!=B.l) return A.l-B.l;//先跟用l進行排序 如果l相等
    return A.r-B.r; //用r排序
}