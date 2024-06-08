#include <stdio.h>
int main()
{
    int a[10] = {1, 2};
    int *p;
    a[5] = 100;

    printf("%iu\n", sizeof(a));
    printf("%p\n", a);
    printf("%3d %p\n", a[0], &a[0]);
    printf("%3d %p\n", a[1], &a[1]);
    printf("%3d %p\n", a[5], &a[5]);

    p = a;
    printf("%p %p\n", a, p);
    printf("%p %p\n", &a[0], p + 0);
    printf("%p %p\n", &a[1], p + 1);
    printf("%p %p\n", &a[5], p + 5);

    /*printf("%3d %3d\n", a[0], *(p + 0));
    printf("%3d %3d\n", a[1], *(p + 1));
    printf("%3d %3d\n", a[5], *(p + 5));*/

    printf("%3d %3d\n", p[1], *(a + 1));
    printf("%3d %3d\n", p[1], *(1 + a));
    printf("%3d %3d\n", p[1], 1 [a]);
    printf("%3d %3d\n", 1 [p], 1 [a]);

    int i = 5;
    printf("%3d %3d\n", i[p], i[a]);
    printf("%3d %3d\n", p[i], a[i]);

    return 0;
}
