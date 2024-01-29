#include<stdio.h>
int power(int *i, int *j);
int main()
{
	int i,j,z;
	printf("enter number=");
	scanf("%d",&i);
	printf("enter power=");
	scanf("%d",&j);
	z=power(&i,&j);
    printf("result=%d",z);
return 0;	
}
int power(int *i,int *j)
{
   int k,z=1;
    for(k=1;k<=*j;k++)
    z=z*(*i);
    return z;  
}