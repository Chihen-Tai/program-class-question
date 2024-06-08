#include <stdio.h>
#include <string.h>

unsigned long my_strlen(char s[])
{
    unsigned long i = 0;//
    while (s[i]!='\0')//while (s[i++])：使用 while 迴圈，當 s[i] 不為空字元 '\0' 時執行迴圈，同時遞增 i 的值。
    // while(s[i++])
        {
            i++;
        }
        
    return i ;
}
int main()
{
    char str[10];//={65,80,80,90,0}
    str[0] = 65; //'A'
    str[1] = 80; //'P'
    str[2] = 80; //'P'
    str[3] = 90; //'Z'
    str[4] = 0;     // '\0'
    printf("%s %lu\n", str, my_strlen(str));//lu = long unsign
    return 0;
}