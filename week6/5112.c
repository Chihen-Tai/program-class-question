#include <stdio.h>

unsigned long mylen(char *str);

int main()
{
    char str[]="Hello,world!";
    printf("%lu %s\n",mylen(str),str);//unsign long
    return 0;
}

unsigned long mylen(char *p)
{
    unsigned long len = 0;
    while (*p != '\0') {
        printf("%p\n",p);
        len++;
        p++;
    }
    return len;
}