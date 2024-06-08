#include <stdio.h>
int main()
{
    char ch;
    for (ch=20;ch<127;ch++)
    {
        printf("The ASCII value for %c is %d.\n",ch,ch);
    }
    return 0;
}