#include<stdio.h>
int main()
{
    char remarks;
    scanf("%c",&remarks);
    switch (remarks)
    {
    case 'a':
        printf("Excellent\n");    
        break;
    case 'A':
        printf("Excellent\n");
        break;
    }
}