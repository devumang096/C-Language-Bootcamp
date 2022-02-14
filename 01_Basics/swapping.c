#include<stdio.h>
int main()
{
    int temp,a,b;//temp=temprorary
    printf("enter two integer number");
    scanf("%d%d",&a,&b);
    //interchange
    temp=a;
    a=b;
    b=temp;
    printf("the swapped value:first integer=%d\n",a);
    printf("the swapped value:second integer=%d\n",b);
    return 0;

}
