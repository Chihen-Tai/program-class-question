#include <stdio.h>
/*
a[i] ⟺ *(a+i)

&a[i] ⟺ (a+i)
*/
int main()
{
    int a[10]={1,2};
    // a 陣列名字, 被寫在程式碼裡的時候，會被替換成那個陣列開頭的記憶體位址
    int *p;
    a[5]=100;
    //1, 2,   0,   0,  0,  100,  0,  0,  0,  0
    printf("%lu\n",sizeof(a)); // Output: 40 (sizeof(a) returns the size of the array in bytes)
    printf("%p\n",a); // Output: address of the first element of the array
    printf("%3d %p\n",a[0],&a[0]); // Output: 1 (value of a[0]), address of a[0]
    printf("%3d %p\n",a[1],&a[1]); // Output: 2 (value of a[1]), address of a[1]
    printf("%3d %p\n",a[5],&a[5]); // Output: 100 (value of a[5]), address of a[5]

    p=a;
    printf("%p %p\n",a,p); // Output: address of the array, address stored in p
    printf("%p %p\n",&a[0],p+0); // Output: address of the first element of the array, address stored in p+0
    printf("%p %p\n",&a[1],p+1); // Output: address of the second element of the array, address stored in p+1
    printf("%p %p\n",&a[5],p+5); // Output: address of the sixth element of the array, address stored in p+5

    printf("%3d %3d\n",a[0],*(p+0)); // Output: 1 (value of a[0]), value at address p+0
    printf("%3d %3d\n",a[1],*(p+1)); // Output: 2 (value of a[1]), value at address p+1
    printf("%3d %3d\n",a[5],*(p+5)); // Output: 100 (value of a[5]), value at address p+5

    printf("%3d %3d\n",p[1],*(a+1)); // Output: 2 (value at address p+1), value of a[1]
    printf("%3d %3d\n",p[1],*(1+a)); // Output: 2 (value at address p+1), value of a[1]
    printf("%3d %3d\n",p[1],1[a]); // Output: 2 (value at address p+1), value of a[1]
    printf("%3d %3d\n",1[p],1[a]); // Output: 2 (value at address p), value of a[1]

    int i=5;
    printf("%3d %3d\n",i[p],i[a]); // Output: 100 (value at address p+5), value of a[5]
    printf("%3d %3d\n",p[i],a[i]); // Output: 100 (value at address p+5), value of a[5]
}