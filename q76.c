#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int symmetric = 1;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (n != m) {
        symmetric = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}