// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/
#include <stdio.h>

int main(void)
{
    int c;
    if (scanf("%d", &c) != 1) return 0;
    int f = (c * 9 / 5) + 32;
    printf("Fahrenheit=%d\n", f);
    return 0;
}
