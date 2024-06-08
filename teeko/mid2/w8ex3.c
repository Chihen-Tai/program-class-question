#include <stdlib.h> // Include the necessary header file
#include <stdio.h>
#include <ctype.h>
//Prefix representation:
int cal() // Declare the missing function
{
    int ans,op1,op2;
    char c=getchar();
    if(c=='+')
    {
        op1=cal();
        op2=cal();
        return op1+op2;
    }
    else if(c=='-')
    {
        op1=cal();
        op2=cal();
        return op1-op2;
    }
    else if(c=='*')
    {
        op1=cal();
        op2=cal();
        return op1*op2;
    }
    else if (isdigit(c))
    {
        ungetc(c, stdin);//ungetc() 函數會傳回轉換為 不帶正負號字元的整數引數 c ，如果 c 無法回復，則會傳回 EOF 。
        //stdin	標準輸入流。它是一個指向 FILE 物件的指標，該 FILE 物件是標準輸入流的流對象。
        scanf("%d",&ans);
        return ans;
    }
    else if (c==' ')
    {
        return cal();
    }
    
}
int main()
{
    printf(" = %d\n",cal());
    return 0;
}