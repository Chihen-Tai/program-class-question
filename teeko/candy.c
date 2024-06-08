#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        int d = 0;
        int r[3];
        scanf("%d %d %d", &r[0], &r[1], &r[2]);
        while (r[2] > 0 && (r[0] != 0 || r[1] != 0))
        {
            for (int i = 0; i < 2; i++)
            {
                if (r[i] > r[i + 1])
                {
                    int a = r[i];
                    r[i] = r[i + 1];
                    r[i + 1] = a;
                }
            }
            r[2]--;
            r[1]--;
            d++;
        }
        printf("%d\n", d);
    }
}