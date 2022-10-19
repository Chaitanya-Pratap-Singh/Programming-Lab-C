// WAP to find centigrade for a given Fahrenheit temperature
#include<stdio.h>
void main()
{
float a,b;
printf("\n Enter a temperature in Fahrenheit scale=>");
scanf("%f",&a);
b=(a-32.0)*0.55;
printf("\n The equivalent temperature in celsius is %f",b);
}
