#include <stdio.h>
#include <string.h>
#define BORDER "############################################"
int main(void)
{
    char word[26];
    scanf("%25s", word);
    printf("%.*s\n", (int)strlen(word) + 2, BORDER);//%.*s: 這部分是格式控制字串，其中的 * 表示寬度將由後面的整數值提供，而 s 則表示後面的參數是一個字串。
    printf("#%s#\n", word);
    printf("%.*s\n", (int)strlen(word) + 2, BORDER);

    return 0;
}
/*如果寫 printf("%.3s\n", "university"); 會輸出 uni 也就是只會輸出前三個字元
如果寫 printf("%15s\n", "university"); 會輸出 university 前面會多五個空格(university10個單字)
如果寫 printf("%15.3s\n", "university"); 則會輸出 uni 也就輸出 university 的前三個字元 然後前面會多加入 12 個空格 總共長度是 15 個字元*/