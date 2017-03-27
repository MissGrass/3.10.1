#include<stdio.h>

int main()
{
	int iNumber=1;
	int iSum=0;
	
	do
	{
		iSum=iSum+iNumber;
		iNumber++;
	}
	while(iNumber<=100);
	
	printf("the result is:%d\n",iSum);
	return 0;
}
