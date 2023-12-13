#include<stdio.h>
int main()
{
	int a[50];
	int i,sum=0,limit;
 	printf("enter the limit of your array");
	scanf("%d",&limit);
	if(limit>50)
	{
		printf("please enter the array size below 50");
	}
	else if(limit<0)
	{
		printf("enter atleast one element");
	}
	else
	{
		printf("enter the number:");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("sum of numbers are:%d",sum);
	}	
	return 0;
}
