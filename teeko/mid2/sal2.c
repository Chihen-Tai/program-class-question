#include <stdio.h>
#include <string.h>
#define mod 1000000007
typedef long long ll;
char s[10000001];
ll x;
void string_copy(char *s, int start, ll copy_len, ll len)
{
    for (int i = 0; i < copy_len; i++)
    {
        s[len + i] = s[start + i];
    }
    s[len + copy_len] = '\0';
}
int main()
{
    int n;
    scanf("%d", &n); // n strings (n<=1000
    while (n--)
    {
        scanf("%lld", &x);
        scanf("%s", s);

        ll len = strlen(s)%mod;
        ll ans = len%mod;
        for (int i = 0; i < x; i++)
        {
            if (len < x)
            {
                // s[i+1]~s[len-1] copy s[i]-'0' times and paste after s [len-1]
                int copy_len = (len - i - 1)%mod;
                for (int j = 0; j < s[i] - '1'; j++)
                {
                    //string_copy(s, i + 1, copy_len, len);

                    strncpy(s + len, s + i + 1, copy_len);/*len 是一個數字，
                    表示我們想要在 s 中的哪個位置開始複製，i 是另一個數字，表示我們想要從 s 中的哪個位置開始複製，copy_len 是我們想要複製的字元數量。*/
                    s[len+copy_len] = '\0'; 
                    len = (len + copy_len)%mod;
                    ans = (ans + copy_len)%mod;
                }
            }
            else
            {
                // math sol
                ll copy_len = (ans- 1 - i)%mod;
                if (copy_len < 0)
                {
                   copy_len = copy_len + mod;
                }
                // for(int j=0;j<s[i]-'1';j++)
                //{
                //  ans=ans+copy_len;
                //}
                ans = (ans + (copy_len) * (s[i] - '1') % mod) % mod;
            }
        }
        printf("%d\n", ans);
    }
}
