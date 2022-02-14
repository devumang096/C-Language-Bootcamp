#include<stdio.h>
int addition(int x,int y)//global function
{
    int c;
    c=x+y;
    return c;
}
int main()
{
   // int x,y;
    int x,y,c;
    c=addition(10,20);
    printf("%d",c);
    return 0;
}