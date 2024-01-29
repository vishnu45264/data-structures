#include<stdio.h>
#include<string.h>
#define N 50
int main()
{
    int a[N],n,i,sum=0;
    int *p;
    p=&a;
    printf("enter how any elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&*(p+i));
    }
   for(i=0;i<n;i++) 
    sum=sum+*(p+i);
    printf("sum=%d",sum);
    return 0;
    }