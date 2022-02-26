#include<stdio.h>
int main()
{
    int n,i,j, a[n],number;
    printf("Enter size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                number =a[i];
                a[i]=a[j];
                a[j]=number;
            }
        }
    }
    printf("the number in ascending order:\n:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}