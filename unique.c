#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter array size =");
	scanf("%d",&n);
    int a[n];
    printf("enter array elements =");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("unique elements =");
    for(i=0;i<n;i++)
    {
    	int count=0;
    	for(j=0;j<n;j++)
    	{
    		if(a[i]==a[j]) 
    		{
    		count= count+1;
        	}		
		}
		if(count==1)
		printf("%d\t",a[i]);

	}
	return 0;
}
