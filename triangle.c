//WAP to calculate area of a triangle whose base and height is given.

#include <stdio.h>
void main()
{
    float h,b,area;
    printf("Enter the height and base of the triangle");
    scanf("%f %f",&h,&b);
    area = 0.5*h*b;
    printf("Area of the triangle is %f: ",area);
}