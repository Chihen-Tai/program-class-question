#include <stdio.h>
#include <stdlib.h> // Add missing include statement
int NQ;
int q[14]={0};
int count=0;
int vaild(int row,int col)
{
    int i;
    for(i=0;i<row;i++)
    {
        if(q[i]==col)
        {
            return 0;
        }
        if(row-i==q[i]-col||row-i==col-q[i])
        {
            return 0;
        }

    }
    return 1;
}
void place(int row)
{
 int j;
 if(row==NQ)
 {
    count++;
 }
 else
 {
    for(j=0;j<NQ;j++)
    {
        if(vaild(row,j))
        {
            q[row]=j;
            place(row+1);
        }
    }
 }
}
int main()
{
   NQ=8;
    place(0);
    printf("%d\n",count);
    
   
}