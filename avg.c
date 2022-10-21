//  WAP to find the Average of 5 subjects and find the percentage . Asume the full marks to be 100

#include <stdio.h>
void main()
{
    float a,b,c,d,e;
    printf("Enter the marks in 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float avg = (a+b+c+d+e)/5;
    float percentage = ((a+b+c+d+e)/500)*100;
    printf("Perctage %f Avg %f",avg,percentage);
}