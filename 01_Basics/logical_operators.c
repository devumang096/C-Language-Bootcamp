/*#include<stdio.h>
int main()
{
    printf("%d\t",5>2 && 1<2);
    printf("%d\n",4>5||2<1);
    printf("%d",!(2<1));
}

#include<stdio.h>
int main()
{
    int a;
    a='F'>'b';//F=??? b=????
    printf("%d",a);//print=0
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    a=b=10;
    b= (a==b);//equality operator
    printf("%d %d",a,b);//10 1 0
}