// WAP to find the largest number using ternary operator. Enter the numbers through keyboard.

#include <stdio.h>
void main()
{
    int a,b,larg;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    larg = a>b?a:b;
    printf("largest number is : %d",larg); 
    
}