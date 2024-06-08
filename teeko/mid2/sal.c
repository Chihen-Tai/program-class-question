#include <stdio.h>
#include <string.h>
#define MAX_N 100006
#define mod 1000000007
void string_copy(char str[], int start, int copy_len, int after)
{
}
int x;
char s[MAX_N + 1];

int main()
{
    int len = strlen(s);
    long long ans = len;

    for (int i = 0; i < x; i++)
    {
        if (len < x)
        {
            // s[i+1]~s[len-1]copy (s[i]-'1') times and paste after s [len-1]
            int copy_len = (len - 1) - (i + 1) + 1;
            for (int j = 0; j < s[i] - '1'; j++)
            {
                // string_copy(s, i + 1, copy_len, len);
                strncpy(s + len, s + i + 1, copy_len);
                s[len] = '\0';
                len = len + copy_len;
                ans = ans + copy_len;
            }
        }
        else
        {
            // math solution
            int copy_len = ans - 1 - i;
            for (int j = 0; j < s[i] - '1'; j++)
            {
                ans = ans + copy_len;
            }
            ans = (ans + (copy_len) * (s[i] - '1') % mod) % mod;
        }
    }
}