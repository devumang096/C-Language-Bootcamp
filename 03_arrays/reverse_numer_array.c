#include<stdio.h>
int main()
{
	int n;
	printf("the size of array : ");
	scanf("%d",&n);
    int nums[n];
    printf("elements of array are:");
	for(int i=0;i<n;i++)
    {
	    scanf("%d",&nums[i]);
	}
    for(int i=n-1;n>0;n--)
    {
        printf("reverse elements are %d\n",nums[n-1]);
    }
}