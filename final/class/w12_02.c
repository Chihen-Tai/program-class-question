#include <stdio.h>
int main()
{
    char data[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    char* p;
    int i;

    p=data;
    /*陣列名（data）
    可以被視為指向陣列第一個元素的指標*/
    i=0;
    //*data 等價於 data[0]
    while(i<12)
    {
        printf("(1)%p %d\n",&data[i],data[i]);  // (1) prints the address and value of data[i]
        printf("(2)%p %d\n",p+i,*(p+i));        // (2) prints the address and value of *(p+i)
        printf("(3)%p %d\n",i+p,*(i+p));        // (3) prints the address and value of *(i+p)
        printf("(4)%p %d\n",i+p,i[p]);          // (4) prints the address and value of i[p]
        printf("(5)%p %d\n",data+i,*(data+i));  // (5) prints the address and value of *(data+i)
        printf("(6)%p %d\n",&p[i],p[i]);        // (6) prints the address and value of p[i]
        ++i;
    }

    return 0;
}