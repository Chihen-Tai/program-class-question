#include <stdio.h>
void f(int);
int main()
{
    int y = 2, z = 5;
    printf("In %s(),y= %d and &y = %p\n", __func__, y, &y);
    printf("In %s(),z= %d and &z = %p\n", __func__, z, &z);
    f(y);
    return 0;
}

void f(int z)
{
    int y = 10;
    printf("In %s(),y = %d and &y =%p\n", __func__, y, &y);
    printf("In %s(),z = %d and &z =%p\n", __func__, z, &z);
}
/*
In main(),y= 2 and &y = 000000000061FE1C
In main(),z= 5 and &z = 000000000061FE18
In f(),y = 10 and &y =000000000061FDDC
In f(),z = 2 and &z =000000000061FDF0
 */