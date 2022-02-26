#include<stdio.h>
int main()
{
   int array[100],search,n;
   printf("enter the number of elements in an array\n");
   scanf("%d",&n);//n=4
   for(int i=0;i<=n-1;i++)//input
   {
        scanf("%d",&array[i]);
   }
/*linear search*/
    printf("enter the element you want to search");
    scanf("%d",&search);
    for(int i=0;i<=n-1;i++)//i=0,1
    {
        if(array[i]==search)
        {
            printf("%d is present at %d",search,i+1);
            break;
        }
    }
    return 0;
}
