#include<stdio.h>

int main()
{
	int iRow=1,iColumn;
	for(iRow=1;iRow<=9;iRow++)
	{
		for(iColumn=1;iColumn<=iRow;iColumn++)
		{
			printf("%d*%d=%d",iRow,iColumn,iRow*iColumn);
		}
		printf("\n"); 
	}
	return 0;
}
