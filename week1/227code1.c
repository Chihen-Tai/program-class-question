#include <stdio.h>
int func1(void); // not定義 先宣告
int func2(void);

int main()
{
    func1();                                  // 不能有參數
    printf("L%03d %s\n", __LINE__, __func__); //%03d代表用三個位元表示後面的東西 __line__回傳行數
    return 0;
}

int func1(void)
{
    func2();
    printf("L%03d %s\n", __LINE__, __func__); //%s __func__回傳func名字
    return 0;
}

int func2(void)
{
    printf("hello world!\n");
    printf("L%03d %s\n", __LINE__, __func__);
    return 0;
}
// printf 函數中格式指定符的解釋:
//%03d: 這是一個格式指定符，用於輸出至少3位數的整數 (d)，如果需要，則用前導零進行填充。
//%s: 這是一個格式指定符，用於輸出字符串 (s)，而 __func__ 是一個預定義的標識符，表示當前函數的名稱。
