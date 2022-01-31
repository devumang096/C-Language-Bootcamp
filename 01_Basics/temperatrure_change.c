#include<stdio.h>
int main()
{
    float temperature;
    printf("Enter the temperature in celsius:",temperature);
    scanf("%f",&temperature);

    float farenheit ;

    farenheit= (9*temperature +32*5)/5;
    printf("temperature in farenheit is: %f",farenheit);
    return 0;

}