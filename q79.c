#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int d = 0; d < rows + cols - 1; d++) {

        int r, c;

        if (d < cols) {
            r = 0;
            c = d;
        } else {
            r = d - cols + 1;
            c = cols - 1;
        }

        int temp[100];
        int count = 0;

        while (r < rows && c >= 0) {
            temp[count++] = a[r][c];
            r++;
            c--;
        }

        if (d % 2 == 0) {
            for (int i = count - 1; i >= 0; i--)
                printf("%d ", temp[i]);
        } else {
            for (int i = 0; i < count; i++)
                printf("%d ", temp[i]);
        }
    }

    return 0;
}
