#include <stdio.h>
#include <string.h>

char s[3000];

int main()
{
    int n;
    scanf("%d", &n); // n strings (n<=1000
    while(n--)
    {
         scanf("%s", s);
    int ans = 0;
    int len = strlen(s);
    for (int mid = 0; mid < len; mid++)
    {
        // Odd length palindromes
        for (int i = 0; mid + i < len && mid - i >= 0; i++)
        {
            if (s[mid + i] == s[mid - i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        // Even length palindromes
        for (int i = 0; mid + i + 1 < len && mid - i >= 0; i++)
        {
            if (s[mid - i] == s[mid + i + 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n", ans);
    }
   
    return 0;
}