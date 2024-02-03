#include<stdio.h>
int main()
{
	int n,i,x,v;
	printf("enter array size =");
	scanf("%d",&n);
    int a[n];
    printf("enter array elements \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
     printf("array elements before insertion\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\nenter position of elememt");
    scanf("%d",&x);
    printf("\nenter number");
	scanf("%d",&v);
	for(i=n;i>=x;i--)
	{
		a[i+1]=a[i];
	}
	a[x]=v;
	 printf("array elements after insertion\n");
    for(i=0;i<n+1;i++)
    {
    printf("%d\t",a[i]);
}
    return 0;
}
    
