#include <stdio.h>

void merge(int *p, int *mid, int *end, int *result)
{
    int *q = mid + 1;
    while (p <= mid && q <= end)
    {
        if (*p < *q)
        {
            *result = *p;
            p++;
        }
        else
        {
            *result = *q;
            q++;
        }
        result++;
    }
    while (p <= mid)
    {
        *result = *p;
        p++;
        result++;
    }
    while (q <= end)
    {
        *result = *q;
        q++;
        result++;
    }
}
void merge_sort(int *start, int *end, int *result)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        merge_sort(start, start + (end - start) / 2, result);
        merge_sort(start + (end - start) / 2 + 1, end, result + (end - start) / 2 + 1);
        merge(start, start + (end - start) / 2, end, result);
        while (start <= end)
        {
            *start = *result;
            start++;
            result++;
        }

        return;
    }
}

int main()
{
    int a[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int b[9] = {0};
    int i;
    merge_sort(a, a + 8, b);
    for (i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
