#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    int count[1000] = {0};

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count[nums[i]]++;

        if (count[nums[i]] == 2) {
            printf("Repeated element: %d\n", nums[i]);
            break;
        }
    }

    return 0;
}