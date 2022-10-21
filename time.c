// wap to convert given secs into subsequent hours minute and sec
#include<stdio.h>
void main()
{
    int h,m,s;
    printf("Enter the seconds");
    scanf("%d",&s);
    h=s/3600;
    m=((s%3600)/(60));
    s=s-(3600*h)-(m*60);
    printf("\nThe time is %d hours %d minutes %d seconds",h,m,s);
} 