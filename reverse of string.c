#include<stdio.h>
#include<string.h>
int main()
{
	char st[100],*s,u;
	int i,j,l;
	printf("enter a string =");
	gets(st);
	printf("string before =");
	puts(st);
	s=st;
	l=strlen(st);
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		u=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=u;
	}
	printf("string after =%s",st);
	return 0;
}