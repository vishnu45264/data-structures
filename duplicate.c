#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("enter array size = ");
	scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
       {
    	 if(a[i]==a[j]&&i!=j)
          {
    	 sum =sum+1;
            break;
           }
        }
     }
	 printf("Total no of duplicate elements = %d",sum);

	return 0;
}
