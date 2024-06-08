#include <stdio.h>

typedef char Char3 [3];

void f(char(*w)[3],int row,int col)
{
    printf("%c\n",w[row][col]);
}

void g(char*u,int row,int col,int stride)
//我們將二維陣列 v 作為一維陣列來處理時，這正是 g 函數的目的
{
     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", u[i * stride + j]);
        }
    printf("%c\n",u[row*stride+col]);
}
}

void h(Char3*s,int row,int col)
{
    printf("%c\n",s[row][col]);
}

int main()
{
    char v[4][3]={{'A','B','C'},{'D','E','F'},{'G','H','I'},{'J','K','L'}};

    f(v,2,1);
    g((char*)v,2,1,3);
    h(v,2,1);
    char (*x)[3];
    x=v;
    printf("%c\n",x[2][1]);
}