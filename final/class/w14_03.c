#include <stdio.h>

int main(void)
{

    char *str1[] = {"piece", "of", "cake"};

    char str2[][8] = {"piece", "of", "cake"};

    int i, j;

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 8; j++)

            printf("%c", str1[i][j]);

        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 8; j++)

            printf("%c", str2[i][j]);

        printf("\n");
    }

    return 0;
}