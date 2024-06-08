#include <stdio.h>

int main(void)
{
    char*  str1[] = {"piece", "of", "cake"};

    char str2[][10]  = {"piece", "of", "cake"};

    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<8; j++)
            printf("(%c, %d) ", str1[i][j], str1[i][j]);
        printf("\n");
    }
    printf("str1 size: %lu\n", sizeof(str1));

    for (i=0; i<3; i++) {
        for (j=0; j<8; j++)
            printf("%c", str2[i][j]);
        printf("\n");
    }
    printf("str2 size: %lu\n", sizeof(str2));

    return 0;
}
