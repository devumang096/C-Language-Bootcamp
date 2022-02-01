#include<stdio.h>

int main()
{
     float   pi=3.14,radius,area,circumference;
     printf("Enter radius:");
     scanf("%f",&radius);
     area=pi*radius*radius;
     printf("area of the circle=%f",area);
     circumference=2*pi*radius;
     printf("circumference of the circle=%f",circumference);
     return 0;


}
