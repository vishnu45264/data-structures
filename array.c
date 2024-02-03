#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array =");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\narray elements =");
		for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
	
	
}
