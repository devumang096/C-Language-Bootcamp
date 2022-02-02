#include<stdio.h>
int main()
{
    char var;
    printf("Enter a char value: ");
    scanf("%c",&var);

    if((var>='A' && var<='Z')||(var>='a'&&var<='z'))
    {
        printf("%c is an Alphabet\n",var);
    }
    else if(var>='0'&&var<='9')
    {
        printf("%c is a Digit\n",var);
    }
    else{
        printf("%c is a Special Character",var);
    }
    return 0;
}