#include<stdio.h>
int main()
{
    char value;
    printf("Enter the operation you want to do:");
    scanf("%c",&value);
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    switch (value)
    {
    case '+':
        printf("a+b is %d",a+b);
        break;
    case '-':
        printf("a-b is %d",a-b);
        break;
    default:
        printf("Invalid input");
        break;
    }
}