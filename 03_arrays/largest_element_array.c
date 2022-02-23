#include<stdio.h>
int main()
{
	int n,i,largest;
	printf("the size of array : ");
	scanf("%d",&n);
	//int num;
	//int largest;
    int nums[n];
	for(i=0;i<n;i++){
	scanf("%d",&nums[i]);
	}
	largest = nums[0];
	for(i=1;i<n;i++){
        if(largest<nums[i])
		largest = nums[i];
        
	}
	printf(" largest is %d",largest);
    return 0;
}