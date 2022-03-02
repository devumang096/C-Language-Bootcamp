#include<stdio.h>
int main()
{
    int a[100],i,x,position,n;
    printf("number of elements in array are:");
    scanf("%d",&n);
    printf("elements in array are:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=3;
    position=2;
    n++;

    for(i = n-1;i>=position;i--)
    {
        a[i]=a[i-1];
    }
        a[position-1]=x;

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }


}