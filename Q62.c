// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
    int a, c, d;
    printf("Enter no. of elements in array: ");
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    for (c = 0, d = a - 1; c < d; c++, d--)
    {
        int temp = b[c];
        b[c] = b[d];
        b[d] = temp;
    }
    printf("Reversed array is: ");
    for (c = 0; c < a; c++)
    {
        printf("%d ", b[c]);
    }
    return 0;
}