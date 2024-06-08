#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MOD 1000000007

typedef long long ll;

void solve(int n, int k, ll *a) {
    bool *reachable = (bool *)calloc(k, sizeof(bool));
    reachable[0] = true;

    for (int i = 0; i < n; ++i) {
        int ai_mod_k = a[i] % k;
        if (ai_mod_k == 0) continue;

        bool *new_reachable = (bool *)calloc(k, sizeof(bool));
        for (int j = 0; j < k; ++j) {
            if (reachable[j]) {
                new_reachable[j] = true;
                new_reachable[(j + ai_mod_k) % k] = true;
            }
        }
        free(reachable);
        reachable = new_reachable;
    }

    int count = 0;
    for (int i = 0; i < k; ++i) {
        if (reachable[i]) count++;
    }

    printf("%d\n", count);
    bool first = true;
    for (int i = 0; i < k; ++i) {
        if (reachable[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    free(reachable);
}

int main() {
    int n, k;
    while (scanf("%d %d", &n, &k) != EOF) {
        ll *a = (ll *)malloc(n * sizeof(ll));
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &a[i]);
        }
        solve(n, k, a);
        free(a);
    }
    return 0;
}
