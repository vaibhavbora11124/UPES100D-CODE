#include <stdio.h>

int main() {
    int n, i, j;
    int count, majority = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check frequency of each element
    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Majority element must occur strictly more than n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);

    return 0;
}