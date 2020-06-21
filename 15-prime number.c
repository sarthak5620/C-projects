#include <stdio.h>

int main()
{

    int i, n, a = 0;
    printf("enter a number\n");
    scanf("%d\n", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        if (a == 0)
            printf("it is a prime number.");
        else
            printf("it is not a prime number.");
    }
    return 1;
}