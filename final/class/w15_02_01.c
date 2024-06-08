#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    double *b;
    a=(int*)malloc(10000);
    a[99]=345;
    printf("a: %p\n",a);

    free(a);
    a=NULL;

    b=(double*)malloc(10000);
    printf("b: %p\n",b);

    b[49]=5.4;

    printf("%d\n",a[99]);

    free(b);
    return 0;
}