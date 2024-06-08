#include <stdio.h>
#include <string.h>
int palin(char str[], int len)
{
    for (int i = 0, j = len - 1; i < len && j >= 0; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}
char s[3000];

int main()
{
    // s[i]~s[j]
    int n;
    scanf("%d", &n); // n strings (n<=1000
    while (n--)
    {
        scanf("%s", s); // s[i]~s[j] (i<=j
        int ans = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len; j++)
            {
                ans = ans + palin(s, j - i + 1);
                // printf("%d %d\n",i,j);
            }
        }
        printf("%d\n", ans);
    }
}