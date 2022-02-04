#include<stdio.h>
int main()
{
    int n;
    printf("Enter the digit you want till to print fibonacci series");
    scanf("%d",&n);
    int a=0,b=1,c;
  //  printf("%d",a);
   // printf("\t%d",b);
    while(a<=n){
        c=a+b;//0 1 1 2
        printf("\t%d",c);
        a=b;//a=1
        b=c;//b=1
    }
    return 0;
}