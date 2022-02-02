#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:",a,b);
    scanf("%d%d",&a,&b);
    int bitwise_and= a&b;
    printf("%d\n",bitwise_and);
    int bitwise_or = a|b;
    printf("%d\n",bitwise_or);
    int bitwise_xor = a^b;
    printf("%d\n",bitwise_xor);
    int bitwise_compliment = (~a);
    printf("%d\n",bitwise_compliment);
    return 0;
}