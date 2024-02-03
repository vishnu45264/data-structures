#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter size of array= ");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements =");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	if(sum==7)
	printf("\nthala for a reason");
	return 0;
}
