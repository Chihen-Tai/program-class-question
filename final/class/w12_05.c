#include <stdio.h>
int main()
{
    int z[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    /*
    a[i]=*(a+i)
    &a[i]=a+i
    a[i][j]=*(a[i]+j)=*(*(a+i)+j)
    */
    printf("       z: %p\n", z);
    printf("   &z[0]: %p\n", &z[0]); // &z[0] => z+0 => z
    printf("    z[0]: %p\n", z[0]);  // (z[0]+0) => & z[0][0]
    printf("&z[0][0]: %p\n", &z[0][0]);
    printf(" z[0][0]: %d\n", z[0][0]);
    printf("\n");
    printf("     z+1: %p\n", z + 1);
    printf("   &z[1]: %p\n", &z[1]);    // &z[1] => z+1
    printf("  z[0]+1: %p\n", z[0] + 1); // (z[0]+1) => &z[0][1]
    printf("&z[0][1]: %p\n", &z[0][1]); // address of 2
    printf("\n");
    printf("      *z: %p\n", *z);    // *z => *(z+0) => z[0] => &z[0][0]
    printf("    z[0]: %p\n", z[0]);  // z[0] => &z[0][0]
    printf("   *z[0]: %d\n", *z[0]); // *z[0] => *(z[0] + 0) => z[0][0]
    printf(" z[0][0]: %d\n", z[0][0]);
    printf("     **z: %d\n", **z); // **z => * *(z+0) => * z[0] => z[0][0]
                                   /*
                            z: 0x7ffc806ba070
                           &z[0]: 0x7ffc806ba070
                            z[0]: 0x7ffc806ba070
                        &z[0][0]: 0x7ffc806ba070
                         z[0][0]: 1
                               
                             z+1: 0x7ffc806ba078
                           &z[1]: 0x7ffc806ba078
                          z[0]+1: 0x7ffc806ba074
                        &z[0][1]: 0x7ffc806ba074
                               
                              *z: 0x7ffc806ba070
                            z[0]: 0x7ffc806ba070
                           *z[0]: 1
                         z[0][0]: 1
                             **z: 1*/
}