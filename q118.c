#include <stdio.h>

int main() {
    int n, i;
    int sum = 0, arraySum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    // Sum of numbers from 0 to n
    sum = n * (n + 1) / 2;

    // Missing number
    printf("Missing number = %d\n", sum - arraySum);

    return 0;
}