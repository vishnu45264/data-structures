int main()
{
	int i,n,search,high,low,mid;
	printf("enter array size =");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    } 
	printf("enter the number that you want to search");
	scanf("%d",&search);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high){
	if(a[mid]==search)
{
	printf("%d element found at position %d",search,mid+1);
	break;
	}	
	if(a[mid]<search)
	{
		low=mid+1;
		mid=(low+high)/2;
	}
	if(a[mid]>search)
	{
		high=mid-1;
		mid=(low+high)/2;
	}
}
	if(low>high)
	printf("element is not present in this array");
	return 0;
	
	}
	
