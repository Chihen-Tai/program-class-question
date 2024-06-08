#include <stdio.h>

int main()
{
    int z[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    int(*pz)[2];

    pz = z[1];
    pz++;
    printf("%d\n", **pz);
    printf("%p\n", pz);
}