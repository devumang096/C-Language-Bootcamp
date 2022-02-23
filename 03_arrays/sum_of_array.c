#include<stdio.h>
int main()
{
    int n;
    int a[n];
    printf("Enter size of array:");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + a[i];//0+1,1+2,3+3,6+4,10+5
    }
    printf("average is %d",sum/n);// 15/5=3
}

