#include <stdio.h>
int NQ;
/* q[i] 記錄的是在第 i 列 (row) 出現的皇后，要擺在第幾行 (column) */
/* 譬如，q[] 的內容如果是 {2, 0, 3, 1}，表示四個皇后分別放在棋盤的 (0,2), (1,0), (2,3), (3,1) 四個位置 */
int q[10]={0};
int count=0;
/*q[0]=2 q[1]=0 q[2]=3 q[3]=1*/
void display (void)
{
    int i,j;
    for (i=0;i<NQ;i++)
    {
        for (j=0;j<NQ;j++)
        {
            if(q[i]==j)
            {
                printf("Q");
            }
            else 
            {
                printf("-");
            }
        }
        printf("\n");
    }
    printf("########\n");
}
int valid (int row, int col)
{
    int i,j;
    for(i=0;i<=row-1;i++)
    {
        if(q[i]==col)
        {
            return 0;
        }
        if(row-i==q[i]-col||row-i==col-q[i])//對角線 斜率
        {
            return 0;
        }
    }
    return 1;
}
void place (int row)
{
    int j;//column
    if(row==NQ)
    {
        //display();
        count++;
    }
    else
    {
        for(j=0;j<NQ;j++)
        {
            if(valid(row,j))
            {
                q[row]=j;
                place(row+1);
            }
        }
    }
    
}


int main()
{
    scanf("%d",&NQ);
    place(0);
    printf("%d",count);
}