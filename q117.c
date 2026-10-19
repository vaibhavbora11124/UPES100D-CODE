#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }

    // Print merged array
    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}