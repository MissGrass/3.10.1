#include<stdio.h>

int main()
{
	int iNumber;
	
	printf("Enter a number\n");
	scanf("%d",&iNumber);
	
	if(iNumber)
	{
		printf("the value is ture and the number is:%d\n",iNumber);
	}
	else
	{
		printf("the value is false and the number is:%d\n",iNumber);
	}
	return 0;
}
