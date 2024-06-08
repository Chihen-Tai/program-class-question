#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int a[n];
    a[0] = 0;

    // Read input and calculate prefix sum
    for (int i = 1; i <= n; i++) {
        int ai;
        scanf("%d(/`A`)/ ~I__I ", &ai);
        a[i] = a[i - 1] + ai;
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int l, r;
        scanf("%d %d", &l, &r);

        // Output the sum using prefix sum
        printf("%d\n", a[r] - a[l - 1]);
    }

    return 0;
}