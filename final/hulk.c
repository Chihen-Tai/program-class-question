#include <stdio.h>
void binary_search(int *arr, int L, int R, int x)//x is the target
{
    int mid = (L + R) / 2;
    if (L > R)
        return -1;
    else if (arr[mid] < x)
        binary_search(arr, mid + 1, R, x);
    else if (arr[mid] > x)
        binary_search(arr, L, mid - 1, x);
    else
        return mid;
}
int lower_bound(int *arr, int R, int L, int x)
{ // lower bound -> find min i a[i]>=x
    int mid = (L + R) / 2;
    while (L < R)
    {
        mid = (L + R) / 2;
        if (arr[mid] >= x)
            R = mid;
        else
            L = mid + 1;//因為a[mid]<target所以L=mid不會是答案所以要+1就有可能=target
    }
    return R;
}
int upper_bound(int *arr, int R, int L, int x)
{ // upper bound -> find min i a[i]>x
    int mid = (L + R) / 2;
    while (L < R)
    {
        mid = (L + R) / 2;
        if (arr[mid] > x)
            R = mid;
        else
            L = mid + 1;
    }
    return R;
}
int compare(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
#define MAX_N 200005
int a[MAX_N], n;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compare);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x;
        scanf("%d", &x);
        int idx=lower_bound(a,n,0,x);
        int idx2=upper_bound(a,n,0,x);
        printf("%d\n",idx2-idx);
    }
    
}