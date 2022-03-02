#include<stdio.h>
int main()
{
    int a[100],i,position,n;
    printf("number of elements in array are:");
    scanf("%d",&n);
    printf("elements in array are:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where you want to delete",position);
    scanf("%d",position);
    if(position>=n+1)
    {
        printf("not possible to delete");
    }
    else{

    for(int i = position-1;i<n;i++)
    {
        a[i]=a[i+1];
    }

    for(int i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);

    }

}
return 0;


}