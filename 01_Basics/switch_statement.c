#include<stdio.h>
int main()
{
    int value;
    scanf("%d",&value);
    switch (value)
    {
    case 1:
        printf("Monday\n");    
        break;
    case 2:
        printf("Tuesday\n");
        //break;
    case 3:
        printf("Wednesday\n");
        //break;
    case 4:
        printf("Thursday");
        //break;
    case 5:
        printf("Friday");
        //break;
    case 6:
        printf("Saturday");
        //break;
    default:
        printf("Classes will be Off!!!");
        break;
    }
    return 0;
}