#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n, r, k;
typedef struct
{
    int x[2005];
    int y[2005];
    int visit[2005];
} plane;

plane xy; // 定義結構變量

int dis(int i, int j)
{
    return (xy.x[i] - xy.x[j]) * (xy.x[i] - xy.x[j]) + (xy.y[i] - xy.y[j]) * (xy.y[i] - xy.y[j]);
}

int dfs(int now)
{
    xy.visit[now] = 1;
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (dis(now, i) <= r * r && xy.visit[i] == 0) // 確認是否為neighbor且未被訪問過
        {
            res += dfs(i);
            // printf("%d\n", res);
        }
    }
    return res;
}
//如果re去scanf看有沒有加&和矩陣大小
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &n, &r, &k);
        int group1 = 0, group2 = 0;
        // 讀取點的座標
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &xy.x[i], &xy.y[i]);
        }
        memset(xy.visit, 0, sizeof(xy.visit));
        for (int i = 0; i < n; i++)
        {
            
            if (xy.visit[i] == 0)
            {
                int res=dfs(i);
                // printf("i=%d res=%d\n", i,dfs(i));
                if (res>= k)
                {
                    group1++;
                }
                else
                {
                    group2++;
                }
            }
        }
        printf("%d %d\n", group2, group1);
    }

    return 0;
}
