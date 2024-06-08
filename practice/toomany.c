#include <stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
}
int main2()
{
    char ch;
    while((scanf("%c",&ch))!=EOF)
    {
        putchar(ch);
    }
}
str[10000001];
int main3()
{
    while(fgets(str,10000000,stdin))
    {
        printf("%s",str);
    }
}