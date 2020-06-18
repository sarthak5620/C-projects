#include<stdio.h>

void main(){
    int a, b,temp;
    
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    
    printf("Before swaping  a = %d and b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swaping  a = %d and b = %d", a, b);
}