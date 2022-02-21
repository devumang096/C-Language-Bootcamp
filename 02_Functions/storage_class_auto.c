#include<stdio.h>
void fun(){
    auto int a=10;
    ++a;
    printf("%d\t",a);
}
void main()
{
   fun();
   fun();
   fun();
}