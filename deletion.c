#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    } 
    printf("array before deletion\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
	printf("\nenter index number = ");
	scanf("%d",&j);
	for(i=j;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("after deletion\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
