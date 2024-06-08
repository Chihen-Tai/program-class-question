#include <stdio.h>
int main()
{
    int a[1000005];
    int n, p = 1;

    scanf("%d", &n);
    while (n--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int i = p; i <= y; i++)
        {
            int t = i;
            int num = 0;
            while (t >= 1)
            {
                if (t % 10 == 1)
                {
                    num++;
                }
                t = t / 10;
            }
            a[i] = a[i - 1] + num;//前綴
            // printf("%d\n",a[i]);
        }
        if (p < y + 1) // 不加這一組會超時
        {
            p = y + 1;/*
            原本是一個前綴和一直加到y
            如果之後的y大於原本的y不需要再加原本前面y的值
            所以才額外設置一個變數p*/
        }
        printf("%d\n", a[y] - a[x - 1]);
    }
}