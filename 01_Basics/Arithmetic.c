//write a program to usage of  arithmetic operators

#include<stdio.h>
int main()
{
    float a,b,result;
    printf("enter two integers");
    scanf("%f%f",&a,&b);//a=4 b=2
    result=a+b;//result=6
    printf("the sum of two numbers=%f\n",result);
    result=a-b;//result=2
    printf("the sub of two numbers=%f\n",result);
    result=a*b;
    printf("the multiplication of two numbers=%f\n",result);
    result=a/b;//it will returns the quotient
    printf("the division of two numbers=%f\n",result);
    return 0;
}

