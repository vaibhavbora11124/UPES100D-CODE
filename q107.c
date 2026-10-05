#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    for (i = 0; i < n; i++)
    {
        int previousGreater = -1;

        // Check elements on the left from nearest to farthest
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", previousGreater);
    }

    return 0;
}