#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements =");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("orginal order=");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		printf("\nreverse order=");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
