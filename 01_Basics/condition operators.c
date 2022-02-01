//write a program to ask user to enter a number.check if the number >10 then print"number is greater"otherwise print"number is small"

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number",number);
    scanf("%d",&number);
    (number>10)?printf("number is greater"):printf("number is small");
    return 0;
}
