 #include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements: ");

    for (i = 0; i < n; i++) {
        found = 0;

        // Check elements to the right
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        // If no greater element is found
        if (found == 0) {
            printf("-1");
        }

        // Comma after every element except the last
        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}