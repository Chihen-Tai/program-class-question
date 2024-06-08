#include <stdio.h>
int main()
{
    int t, a, b, x;
    scanf("%d", &t);
    for (int p = 1; p <= t; p++)
    {
        scanf("%d %d", &a, &b);
        if (a % 4 == 1)
        {
            x = a - 1;
        }
        else if (a % 4 == 2)
        {
            x = 1;
        }
        else if (a % 4 == 3)
        {
            x = a;
        }
        else
        {
            x = 0;
        }
        if (b == x)
        {
            printf("%d\n", a);
        }
        else if ((b ^ x) != a)
        {
            printf("%d\n", a + 1);
        }
        else
        {
            printf("%d\n", a + 2);
        }
    }
}
/*
讓我們仔細解釋為什麼在這個問題中，使用a % 4可以確定x的值。我們知道，x的計算是基於0⨁1⨁2⨁...⨁(a-1)的結果。下面我們來看一些例子：

當 a % 4 == 0：

例如，當a等於4的倍數，比如a=4、8、12等。此時x的計算為0⨁1⨁2⨁3，即x=0。因此，a % 4 == 0的情況下，x就是0。
當 a % 4 == 1：

例如，當a等於4的倍數加1，比如a=5、9、13等。此時x的計算為0⨁1⨁2⨁3⨁4，即x=4。因此，a % 4 == 1的情況下，x就是a-1。
當 a % 4 == 2：

例如，當a等於4的倍數加2，比如a=6、10、14等。此時x的計算為0⨁1⨁2⨁3⨁4⨁5，即x=1。因此，a % 4 == 2的情況下，x就是1。
當 a % 4 == 3：

例如，當a等於4的倍數加3，比如a=7、11、15等。此時x的計算為0⨁1⨁2⨁3⨁4⨁5⨁6，即x=6。因此，a % 4 == 3的情況下，x就是a。
所以，通過觀察這些例子，我們可以得出，在這個問題中，對於不同的a % 4的值，x的計算有固定的規律，這使得程式可以透過a % 4的值來快速確定x的數值。
*/