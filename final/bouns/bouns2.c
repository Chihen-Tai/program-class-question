#include <stdio.h>
#include <string.h>
/*
3
7 5
1 4
4 5
5 6
6 7
3 5
4 3
1 1
2 2
3 4
4 4
1 1
2 2
2 3
3 4
*/
int n, q;
int wall[5005];
int temp[5005];
int guard[5005][2];
int prefix[5005];
int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int take_one(int ind)
{
    memcpy(temp, wall, sizeof(temp));
    /* for (int i = 1; i <= n; i++) {
        temp[i] = wall[i];
    }*/
    for (int i = guard[ind][0]; i <= guard[ind][1]; i++)
    {
        temp[i]--;
    }
    int full = 0;
    for (int i = 1; i <= n; i++)
    {
        if (temp[i] > 0)
        {
            full++;
        }
    }
    //printf("%d ", full);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + ((temp[i] == 1) ? 1 : 0);
    }
    int minus = 0x3f3f3f3f;
    for (int i = 0; i < q; i++)
    {
        int l = guard[i][0];
        int r = guard[i][1];
        if (i != ind)
        {
            //minus = min(minus, prefix[guard[i][1]] - prefix[guard[i][0] - 1]);
            minus = min(minus, prefix[r] - prefix[l - 1]);
        }
    }
    /*printf("%d ", minus);
    printf("%d ", full - minus);
    printf("\n");*/
    return full - minus;
}
int main()
{
/*
7 5
1 4
4 5
5 6
6 7
3 5
*/
    int T=1;
    //scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &n, &q);

        for (int i = 0; i < q; i++)
        {
            scanf("%d %d", &guard[i][0], &guard[i][1]);
        }
        memset(wall, 0, sizeof(wall));
        for (int i = 0; i < q; i++)
        {
            for (int j = guard[i][0]; j <= guard[i][1]; j++)
            {
                wall[j]++;
                //printf("wall[%d] = %d\n", j, wall[j]);
            }
        }
        int ans = 0;
        for (int i = 0; i < q; i++)
        {
            ans = max(ans, take_one(i));
        }
        printf("\n");
        printf("%d\n", ans);
    }
}