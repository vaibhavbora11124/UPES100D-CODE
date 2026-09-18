#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int i, j, distinct = 1;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (!distinct)
            break;
    }

    printf("%s", distinct ? "True" : "False");

    return 0;
}