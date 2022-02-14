#include<stdio.h>
void change(int num)//function declaration
{
    printf("before adding=%d\n",num);
    num=num+100;
    printf("after adding=%d",num);
}
int main()
{
    int x=100;
    printf("before calling=%d\n",x);
    change(x);//calling the function
    printf("after calling=%d\n",x);
    return 0;
}
