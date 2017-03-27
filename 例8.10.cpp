#include<stdio.h>

int main() 
{
	int iIndex;
	char cArray[12]="MingRi KeJi";
	
	for(iIndex=0;iIndex<12;iIndex++)
	{
		printf("%c",cArray[iIndex]);
	}
	printf("\n%s\n",cArray);
	return 0;
}
