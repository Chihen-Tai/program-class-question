#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float f;
    while(scanf("%f",&f)!=EOF)
    {
        unsigned int u=*(unsigned int*)&f;
        char output[33];
        output[32]='\0';
        for(int i=31;i>=0;i--)
        {
            if(u%2==0)
            {
                output[i]='0';
            }
            else if(u%2==1)
            {
                output[i]='1';
            }
            //在每次迭代中，程式檢查 u 的最低位是否為 0 或 1。如果是 0，則將 output[i] 設為 '0'，否則設為 '1'。
            u=u>>1;
        }
        printf("%s\n",output);
        //01000001111001100001001001101111
    }
}