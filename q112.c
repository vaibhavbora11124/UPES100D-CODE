#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int currentSum, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize with the first element
    currentSum = arr[0];
    maxSum = arr[0];

    // Kadane's Algorithm
    for (i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum Sum = %d\n", maxSum);

    return 0;
}