// WAP to swap two integer numbers using third variable.

#include<stdio.h>
void main()
{
int a,b,temp;
printf("\nEnter two integers a and b : ");
scanf("%d%d", &a,&b);
temp=a;
a=b;
b=temp;
printf("\n After swapping a=%d and b=%d",a,b);
}
