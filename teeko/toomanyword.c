#include <stdio.h>

int main()
{
    char c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}
/*
while ((c = getchar()) != EOF)：這是一個while迴圈，它會持續執行，直到讀取的字元等於EOF。getchar() 函式用於讀取一個字元，並將其儲存在變數c中。

putchar(c);：這個語句將讀取到的字元顯示在螢幕上，使用 putchar() 函式。
*/