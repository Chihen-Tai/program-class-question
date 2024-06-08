#include <stdio.h>
void permutation(char a[],int n);
void swap(char *,char *);
int main()
{
    char *a="cat";
    permutation(a,3);
    return 0;
}
void permutation(char*a,int n)
{
    int i;
    if(n==1)
    {
        printf("%s\n",a);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            swap(&a[i],&a[n-1]);
            printf("%c\n",a[i]);
            permutation(a,n-1);
            swap(&a[i],&a[n-1]);
        }
    }
}
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}