#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int i, j, sum = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}