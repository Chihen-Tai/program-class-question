#include <stdio.h>
#include <string.h>
char a[3000], b[3000];
int equal(char a[], char b[], int start_a, int start_b, int len)
{
    if (len & 1)
    {
        if (strncmp(a + start_a, b + start_b, len) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int a1b1 = equal(a, b, start_a, start_b, len / 2);
    int a2b2 = equal(a, b, start_a + len / 2, start_b + len / 2, len / 2);
    if (a1b1 == 1 && a2b2 == 1)
    {
        return 1;
    }
    int a1b2 = equal(a, b, start_a, start_b + len / 2, len / 2);
    int a2b1 = equal(a, b, start_a + len / 2, start_b, len / 2);
    if (a1b2 == 1 && a2b1 == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", a);
        scanf("%s", b);
        int len_a = strlen(a), len_b = strlen(b);
        if (len_a != len_b)
        {
            printf("NO\n");
            return 0;
        }
        else
        {
            if (equal(a, b, 0, 0, len_a) == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}