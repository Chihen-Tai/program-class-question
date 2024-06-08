#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1, word_len;
    char word[40];
    scanf("%39s", word);
    // 39：這表示接下來的字串最多能容納39個字符
    // ，這是用來限制輸入字串的長度，避免超過預留的空間。
    word_len = strlen(word);
    while (i <= word_len)
    {
        printf("%*.*s\n", word_len, i, word);
        /* * 的第一個出現表示後面的數字是由參數（在這裡是 word_len）指定的，
        用於指定字符串的最大寬度。
* 的第二個出現表示後面的數字是由參數（在這裡是 i）指定的，用於指定要輸出的字符數*/
        i++;
    }
    return 0;
}