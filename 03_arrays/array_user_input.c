#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<=4;i++){
        scanf("%d\n",&marks[i]);
    }
    
    for(int i=0;i<=4;i++){
        printf("%d",marks[i]);
        if(marks[1]==3){
        printf("1");
    }
    }
    
}