#include <stdio.h>
#define MAXNV 5    // 0 1 2
int value[MAXNV];  // value[]=[1,5,10]
int number[MAXNV]; // number[]=[2,1,1]
int limit[MAXNV]={5,5,5};  // limit[]=[2,1,1]

void show(int nv);
// nv 有幾種不同的銅板面值
void change(int amount, int smallest_idx, int nv);

void show(int nv)
{
    int i;
    printf("(%d", number[0]);
    for (i = 1; i < nv; i++)
    {
        printf(",%d", number[i]);
    }
    printf(")\n");
}

void change(int amount, int smallest_idx, int nv)
{
  if(smallest_idx<nv)
  {
    if(amount==0)
    {
        show(nv);
    }
    else if (amount>0)
    {
        change(amount,smallest_idx+1,nv);
        if(number[smallest_idx]<limit[smallest_idx])
        {
        number[smallest_idx]++;
        change(amount-value[smallest_idx],smallest_idx,nv);
        number[smallest_idx]--;
        }
    }
  }
}
int main()
{
    int nv, i;
    int money;

    scanf("%d", &nv); // 3
    if (nv > MAXNV || nv < 1)
    {
        return 0;
    }
    for (i = 0; i < nv; i++)
    {
        scanf("%d", &value[i]); // 1 5 10
    }
    scanf("%d", &money);  // 17
    change(money, 0, nv); // change(17,0,3)
    return 0;
}
