#include <stdio.h>
#include <string.h>
#define MAX_N 2000
int n;
char s[MAX_N + 1];
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        int ans = 0;
        n = strlen(s);
        for (int mid = 0; mid < n; mid++)
        {
            // odd bacab
            // s[mid]=s[mid]
            // s[mid+2]==s[mid-2]
            // s[mid+i]==s[mid-i]
            for (int i = 0; mid + i < n && mid - i >= 0; i++)
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
            // even abba
            // s[mid]==s[mid+1]
            // s[mid+2]==s[mid-1]
            // s[mid+1+i]==s[mid-i]
            for (int i = 0; mid + 1 + i < n; i++)
            {
                if (s[mid + 1 + i] == s[mid - i])
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            printf("%d\n", ans);
        }

        return 0;
    }
}