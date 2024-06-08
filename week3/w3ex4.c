#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        putchar(toupper(ch));
    }
    putchar(ch);

    return 0;
}