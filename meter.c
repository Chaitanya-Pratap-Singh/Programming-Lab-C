// Wap to convert quantity in meter to its subsequent km an meter
#include <stdio.h>
void min()
{   float km,m;
    printf("Enter the distance in Meter");
    scanf("%f",&m);
    km =m/1000;
    m=m%1000;
    printf("The Distance is %d km %d m",km,m);
}