# include <stdio.h>
int main(void)
{
 int i = 'A';

 while (i <= 'Z') {
    printf("  %c: %3d", i, i);
    i++;
 }
 return 0;
}