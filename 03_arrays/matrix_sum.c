#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];

    printf("elements of array a are:");
    for(int i =0;i<2;++i)//i=0,1
    {
        for(int j=0;j<2;++j){//j=0,1
        scanf("%d\n",&a[i][j]);
        }
    }
    printf("elements of array b are:");
    for(int i =0;i<2;++i)
    {
        for(int j=0;j<2;++j){
        scanf("%d\n",&b[i][j]);
        }
    }
    for(int i =0;i<2;++i)
    {
        for(int j=0;j<2;++j){
        c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i =0;i<2;++i)
    {
        for(int j=0;j<2;++j){
        printf("%d",c[i][j]);
        }
    }
    
    
}