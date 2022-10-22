// Wap to convert quantity in meter to its subsequent km an meter
#include <stdio.h>
void main()
{   float m;
    int km;
    printf("Enter the distance in Meter");
    scanf("%f",&m);
    km =m/1000;
    m= m -(1000.0*km);
    printf("The Distance is %d km %f m",km,m);
}