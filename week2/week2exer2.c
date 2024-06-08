#include <stdio.h>
#include <string.h>
int main()
{
    int i,k;
    char num[100]={'1','3','5','7','9','\0'};
    char zeros[100]={'1'};
    int len;
    int x;
    scanf("%s",&num);
    printf("The number %s can be expressed as\n",num);
    k=0;
    len=strlen(num);
    i=0;
    x=0;

    while(i<len)
    {
        printf("%c*%s + ",num[len-i-1],zeros);
        k++;
        zeros[k]='0';//這行代碼位於 while 循環中，每次迭代 k 都會增加，這樣就會在 zeros 陣列中從索引 1 開始逐步添加字符 '0'，用於表示數字中的零位。
        //x = 10*x+num[i]-'0'
        i++;
    }

}