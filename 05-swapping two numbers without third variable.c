#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter the values of two variables\n");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("numbers after swapping are %d and %d.", a, b);
}