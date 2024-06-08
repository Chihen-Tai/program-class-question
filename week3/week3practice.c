#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    /*
    || logical or
    && logical and

    */
    if ((i < 5 || j < 5) && (i + j > 10))
    {
        printf("i: %d\n", i);
        printf("j: %d\n", j);
    }
    else
    {
        char str[50];
        puts(str); // printf("%s\n",str);
        puts("123");
    }
    printf("bitwise or : %d\n", (i | j));
    printf("bitwise and: %d\n", (i & j));
    printf("bitwise xor: %d\n", (i ^ j));
    return 0;
}
/*
bitwise or
bitwise and
bitwise xor
*/