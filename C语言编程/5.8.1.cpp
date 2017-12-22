#include<stdio.h>

int main()
{
	char cSmall;
	char cBig;
	
	puts("Please enter minuscule character:");
	cSmall=getchar();
	puts("Capital character is:");
	cBig=cSmall-32;
	printf("%c\n",cBig);
	return 0;
}
