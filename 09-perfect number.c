
#include <stdio.h>
int main()
{
    int num, rem = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            rem = rem + i;
        }
    }
    if (num == rem)
    {
        printf("%d is perfect number", num);
    }
    else
    {
        printf("%d is not perfect number", num);
    }
}