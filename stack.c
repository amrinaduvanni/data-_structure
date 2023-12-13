#include<stdio.h>
int stack[1000];
int choice,n,x,i,size,top;
void push(int x)
	{
		if(top>=n-1)
		{
			printf("\n the stack is overflow");
		}
		else
		{
			top=top+1;
			stack[top]=x;
			printf("element is added %d",stack[top]);
		}
	}
void pop()
	{
		if(top<=-1)
		{
			printf("\n the stack is underflow");
		}
		else
		{
			printf("\n deleted element in stack %d",stack[top]);
			top=top-1;
		}
	}
void display()
{
	if(top>=0)
		{
			printf("\n stack is element is \n");
			for(int i=top;i>=0;i--)
			{
				printf("%d\n",stack[i]);
			}

		}
		else
		{
		printf("\n the stack is empty");
		}
	}
int main()
	{
		int x;
		top=-1;
		printf("\n enter the size of ethe stack");
		scanf("%d",&n);
		printf("\n stack operations");
		printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
		do
		{
			printf("\n enter the choice:");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("enter the value to be added:");
					scanf("%d",&x);
					push(x);
					break;
				
				case 2:
					pop();
					break;
				case 3:
					display();
					break;
				
				case 4:
					printf("\n exited");
					break;
				default:
					printf("\n enter a valid choice");
				
			}
		}
		  while(choice!=4);
		 return (0);
	}






















		
