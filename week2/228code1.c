#include <stdio.h>
#define ENGINE 1499.99
void test_float(void)
{
    printf("~%f~\n",ENGINE);
    printf("~%e~\n",ENGINE);
    printf("~%4.2f~\n",ENGINE);
    printf("~%3.1f~\n",ENGINE);
    printf("~%10.3f~\n",ENGINE);
    printf("~%-10.3f~\n",ENGINE);
    printf("~%12.3e~\n",ENGINE);
    printf("~%+4.2f~\n",ENGINE);
    printf("~%010.2f~\n",ENGINE);
}
/*
%f: 以浮點數格式印出。
%e: 以科學記號格式印出。
%4.2f: 寬度為4，小數部分顯示2位。
%3.1f: 寬度為3，小數部分顯示1位。
%10.3f: 寬度為10，小數部分顯示3位。
%-10.3f: 左對齊，寬度為10，小數部分顯示3位。
%12.3e: 以科學記號格式，寬度為12，小數部分顯示3位。
%+4.2f: 正數顯示正號，寬度為4，小數部分顯示2位。
%010.2f: 用0填充，寬度為10，小數部分顯示2位。
*/
void test_precision(void)
{
    int width,precision;
    double rate =123.45;
    printf("enter a width and a precision: ");
    scanf("%d%d",&width,&precision);
    printf("rate:'%*.*f'\n",width,precision,rate);//%*.*f這種格式中的*表示使用後面的變數（這裡是width和precision）來指定寬度和精度。
}
int main(void)
{
    test_float();
    test_precision();
    return 0;
}