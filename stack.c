#include<stdio.h>
int stack[100];
int n;
int top,choice;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enter size of stack = ");
	scanf("%d",&n);
	printf("enter stack operations");
	printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit\n\t");
	do
	{
		printf("\nenter the choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				push();
				break;
			}
			case 2:
				{
				pop();
				break;
			}
			case 3:
			{
			    display();
			    break;
			}
			case 4:
				{
				printf("\nexit point");
				break;
			}
			default:
				{
				printf("\nenter a valid choice");
			}
				
			    
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top==n-1)
	{
		printf("\noverflow");
	}
	else
	{
		int x;
		printf("\nenter the number that u want to push= ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else{
		printf("\nthe popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
	int i;
	printf("\nThe elements in stack\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	}
	else
	{
		printf("\nstack is mt");
	}
}
