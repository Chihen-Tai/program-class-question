#include <stdio.h>

int main()
{
    char z[4][3] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}};
    char(*p)[3];
    p = z;
    /*
    a[i]=*(a+i)
    &a[i]=a+i
    */
    printf("p+0: %p\n", p + 0); //
    printf("p+1: %p\n", p + 1); //
    printf("p+2: %p\n", p + 2); //
    printf("z+0: %p\n", z + 0); // &z[0] 代表那一整行的指標
    printf("z+1: %p\n", z + 1); // &z[1]
    printf("z+2: %p\n", z + 2); // &z[2]
    printf("z+3: %p\n", z + 3); // &z[3]
    printf("z+4: %p\n", z + 4); // &z[4]
    printf("%c", *(z[0]+1));
    return 0;
}