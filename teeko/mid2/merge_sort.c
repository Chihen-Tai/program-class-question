#include <stdio.h>
#include <stdlib.h>
int a[1000000], buffer[1000000];
void merge(int starta, int lena, int startb, int lenb)
{
    int i = 0, j = 0, k = 0;
    while (i < lena && j < lenb)
    {
        if (a[starta + i] < a[startb + j])
        {
            buffer[k++] = a[starta + i++];
        }
        else
        {
            buffer[k++] = a[startb + j++];
        }
    }
    while (i < lena)
    {
        buffer[k++] = a[starta + i++];
    }
    while (j < lenb)
    {
        buffer[k++] = a[startb + j++];
    }
}
void merge_sort(int left, int right)
{
    int mid = left + (right - left) / 2;
    if (left >= right)
    {
        return;
    }
    merge_sort(left, mid);
    merge_sort(mid + 1, right);
    
    /*merge(left, mid-left+1, mid+1, right-mid);
    for(int i=0; i < right-left+1; i++)
    {
        a[left+i] = buffer[i];
    }*/
    
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (a[i] < a[j])
        {
            buffer[k] = a[i];
            k++;
            i++;
        }
        else
        {
            buffer[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        buffer[k] = a[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        buffer[k] = a[j];
        k++;
        j++;
    }
    for (i = left; i <= right; i++)
    {
        a[i] = buffer[i];
    }

}
int main()
{
    int n, i;
    n = 10;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % n;
    }
    printf("Before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    merge_sort(0, n - 1);
    printf("\nAfter sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", buffer[i]);
    }
}