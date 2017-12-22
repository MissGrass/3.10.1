#include<stdio.h>

int main()
{
	int iNumber;
	
	for(iNumber=0;iNumber<=100;iNumber++)
	{
		if(iNumber%3==0)
		{
			printf("!,");
			continue;
		}
		printf("%d,",iNumber);
	}
	return 0;
}
