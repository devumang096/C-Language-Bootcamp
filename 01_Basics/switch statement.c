//write a program to take input from user
//print weekdays
/////
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Day number from sunday=1\nmonday=2\ntuesday=3\nwednesday=4\nthursday=5\nfriday=6\nsaturday=7\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1:
        printf("enjoy!its holiday");
        break;
     case 7:
        printf("enjoy!its holiday");
        break;
    default:
        {
        printf("so sad, u still have to work");
        }
    }
        return 0;
}










