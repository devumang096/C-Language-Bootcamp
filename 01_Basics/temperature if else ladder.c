//write a program to enter the temp.
//and accordingly print
#include<stdio.h>
int main()
{
    float temperature;
    printf("enter the temperature");
    scanf("%f",&temperature);
    if(temperature<0)
    {
        printf("very cold");
    }
    else if(temperature>=0&&temperature<10)
    {
        printf("cold");
    }
    else if(temperature>=10&&temperature<20)
    {
        printf("hot");
    }
    else
    {
        printf("very hot");
    }
    return 0;

}
