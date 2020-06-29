#include <stdio.h>
int main()
{
    int a, n, s = 0;
    printf("enter the value of a\n");
    scanf("%d", &a);
    for (int i = a; i > 0; i = i / 10)
    {
        n = i % 10;
        s = s * 10 + n;
    }
    if (s == a)
        printf("%d is Pallindrome", a);
    else
        printf("%d is not Pallindrome", a);
    return 0;
}