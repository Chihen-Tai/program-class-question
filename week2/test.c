#include <stdio.h>
/*int main()
{
    int al, ar, bl, br;
    scanf("%d.%d %d.%d", &al, &ar, &bl, &br);
    while (ar < 10)//有一個變數 x，並且你想將它乘以某個值 y，你可以使用 x = x * y; 這樣的語句。然而，使用複合運算符號，你可以寫成 x *= y;，這兩者的效果是一樣的。
        ar *= 10;
    while (br < 10)
        br *= 10;
    int sum = (ar * br) + 100 * (al * br + ar * bl) + 10000 * (al * bl);
    printf("%d.%04d\n", sum / 10000, sum % 10000);
    return 0;
}*/
int main()
{
    double x,y;
    int z;
    scanf("%lf%lf%d",&x,&y,&z);
    char format[20];
    sprintf(format,"%%.%dlf\n",z);
    printf(format);
}