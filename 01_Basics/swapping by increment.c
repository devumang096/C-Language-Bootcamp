#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number:",a);
    scanf("%d",&a);
    printf("enter second number:",b);
    scanf("%d",&b);

     b=a++;
    printf("post increment value of a=%d",a);
    printf("post increment of b=%d",b);
    return 0;


}
