#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int totalSum = 0, leftSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        // Right sum = total sum - left sum - current element
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("Pivot index = %d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("Pivot index = -1\n");

    return 0;
}