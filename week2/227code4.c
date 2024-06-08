#include <stdio.h>
#include <string.h>
#define SPEED 0.083 // 定義一個常數

int main(void)
{
    float minutes, distance;       // float 4 bytes=32bits,double=8bytes=64bits
    int size, letters, my_letters; // 4bytes=32bits -2^31-+
    char name[10];
    int i;

    /*
   [name]
   0x1000  0x1001  0x1002  0x1003  0x1004  0x1005  0x1006  0x1007  0x1008  0x1009
   'S'     't'     'e'     '0'     'e'     '\0'    'd'     'd'     'w'     'e'
   */

    printf("hi! wgat your first name?");
    scanf("%9s", name);
    printf("\n%s how many minutes does it take to walk from\n", name);
    printf("your dormitory to the delta building?");
    scanf("%f", &minutes);
    size = sizeof(name);
    letters = strlen(name);

    distance = minutes * SPEED;
    printf("\nthe distance from your dormitory to the delta building\n");
    printf("\nis about %.3f km.\n\n", distance);

    printf("by the way, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it in.\n", size);

    return 0;
}