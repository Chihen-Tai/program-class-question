// can count strlenght
#include <stdio.h>

unsigned long mylen(char *p)
{
    unsigned long len = 0;
    while(p[len] != '\0')
    {
        len++;
    }
    return len;
}

int palindrome(char *p)
{
    char *q;
    q = p + mylen(p) - 1;
    while (p < q)
    {
        if (*p != *q)
        {
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}

int main()
{
    char str[100];
    scanf("%99s", str);
    printf("%lu,%s\n", mylen(str), str);
    if (palindrome(str))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
