// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos, insert;
    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &insert);
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = insert;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}