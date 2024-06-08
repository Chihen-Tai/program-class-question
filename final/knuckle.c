#include <stdio.h>
#include <string.h>

#define MAXN 2000

// Adjacency list representation of the graph
int adj[MAXN][MAXN];
int visited[MAXN];

// Perform DFS to mark all reachable nodes from node v
void dfs(int v, int n)
{
    visited[v] = 1;
    for (int i = 0; i < n; ++i)
    {
        if (adj[v][i]==1 && visited[i]==0)
        {
            dfs(i, n);
        }
    }
}

// Count the number of unique groups of strings
int count_groups(char* strings[1001], int n)
{
    memset(visited, 0, sizeof(visited));
    memset(adj, 0, sizeof(adj));
    int char_map[26];
    memset(char_map, -1, sizeof(char_map));

    for (int i = 0; i < n; ++i)
    {
        int unique_chars[26] = {0};

        // Mark the presence of each character in the current string
        for (int j = 0; strings[i][j] != '\0'; ++j)
        {
            unique_chars[strings[i][j] - 'a'] = 1;
        }

        // Create edges based on shared characters
        for (int c = 0; c < 26; ++c)
        {
            if (unique_chars[c])
            {
                if (char_map[c] == -1)
                {
                    char_map[c] = i;
                }
                else
                {
                    int prev = char_map[c];
                    adj[i][prev] = 1;
                    adj[prev][i] = 1;
                }
            }
        }
    }

    // Count the number of connected components using DFS
    int groups = 0;

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            dfs(i, n);
            groups++;
        }
    }

    return groups;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char strings[n][1001];
        for (int i = 0; i < n; ++i)
        {
            scanf("%s", strings[i]);
        }

        printf("%d\n", count_groups(strings, n));
    }

    return 0;
}