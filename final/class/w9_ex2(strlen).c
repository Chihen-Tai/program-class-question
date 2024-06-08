#include <stdio.h>

unsigned long mylen(char*s);
int main()
{
    char s[]="Hello, World!";
    printf("%lu\n",mylen(s));
    return 0;
}

unsigned long mylen(char* s)
{
    unsigned long len=0;
    while(*s!='\0')
    {
        len++;
        s++;
    }
    return len;
}