#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int y=5;
    double z=1.2;
    char c='A';

    // adress -> 8 bytes
    printf("the value of y is %d; the adress of y is %p.\n",y,&y);
    printf("the size of y is %lu bytes; the size of &y is %lu bytes.\n",sizeof(y),sizeof(&y));
    

    printf("the value of z is %5.2f; the adress of z is %p.\n,z,&z");
    printf("the size of z is %lu bytes; the size of &z is %lu bytes.\n",sizeof(z),sizeof(&z));


    printf("the value if c is %c; the address of c is %p.\n",c,&c);
    printf("the size of c is %lu bytes; the size of &c is %lu bytes.\n",sizeof(c),sizeof(&c));
}
/*
the value of y is 5; the adress of y is 000000000061FE1C.
the size of y is 4 bytes; the size of &y is 8 bytes.
the value of z is  0.00; the adress of z is 00007FFCE169E7A0.
,z,&zthe size of z is 8 bytes; the size of &z is 8 bytes.
the value if c is A; the address of c is 000000000061FE0F.
the size of c is 1 bytes; the size of &c is 8 bytes.
*/