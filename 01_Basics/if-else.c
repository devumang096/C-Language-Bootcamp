#include <stdio.h>
int main(){
    
    int class_score;
    printf("Enter class_score: ");
    scanf("%d",&class_score);
    printf("class score %d",class_score);
    
     if (class_score==100){
         printf("\nGrade A+");
     }
     else  if (class_score<100&&class_score>=90){
         printf("\nGrade A");
     } 
     else  if (class_score<90&&class_score>=80){
         printf("\nGrade B");
     }
     else if (class_score<80&&class_score>=70){
         printf("\nGrade C");
     }
     else if (class_score<70&&class_score>=60){
         printf("\nGrade D");
     }
    else if(class_score>100 || class_score<0){
        printf("\nInvalid input !!\n ");
    }
    return 0;
}
    
     