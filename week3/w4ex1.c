#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
int 32bits
short 16bits
char 8bits
long 32bits
long long 64bits
*/
//

int table[255];
int main()
{
    int c;
    int z, u;
    z = 0;
    while ((c = getchar()) && isdigit(c)) //'1','2','3','4'
    // If the argument is a numeric character then it returns a non-zero value(true value).
    // It returns zero(false value) if the argument is a non-numeric character.
    {
        z = z * 10 + c-'0' ;
    }
    // scanf("%d",&z);

    z = z * 2;
    // printf %d;
    u = 1;
    while (u <= z)
    {
        u = u * 10;
    }
    u = u / 10; // 找最靠近z的10的次方
    //printf("%d\n",z/u);

    while (u > 0)
    { // z=12345 u=10000 z/u==1 z*u=2345 u/10==1000
        putchar(z / u + '0');
        z = z % u;
        u = u / 10;
    }
    // scanf %x read a sequance of digits, interpret it as an integer

    z = 0;
    while ((c = getchar()) && isxdigit(c))
    { //'1' '2' '3' '4'
        if (isdigit(c))//0nly '0'--'9'
        {
            z = z * 16 + c - '0';
        }
        else
        {
            z = z * 16 + (toupper(c) - 'A' + 10); //'A'-->10 'B'-->11 ....,'F'-->15
        }
    }
    z = z * 2;
    // printf %x
    u=1;
    while (u <= z)
    {
        u = u * 16;
    }
    u = u / 16; // 找到最靠近z的16次方
    while (u > 0)
    {
        if (z / u < 10)
        {
            putchar(z / u + '0');
        }
        else
        {
            putchar(z / u - 10 + 'A');
        }
        z = z % u;
        u = u / 16;
    }
}