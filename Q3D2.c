// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include <stdio.h>

int main(void)
{
    double length, breadth;
    if (scanf("%lf %lf", &length, &breadth) != 2) return 0;
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);
    // Match sample formatting with no decimals when inputs are integers
    printf("Area=%.0f, Perimeter=%.0f\n", area, perimeter);
    return 0;
}
