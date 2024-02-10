#include<stdio.h>
int main()
{
	int i,n,search,count=0;
	printf("enter array size =");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number that u want to search\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("The number %d is found at index %d\ and position %d\n",search,i,i+1);
			count++;
		}
	}
	if(count==0)
	printf("%d is not present in the array\n",search);
	return 0;
	
}
