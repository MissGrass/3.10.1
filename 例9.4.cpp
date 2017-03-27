#include<stdio.h>

char ShowChar(); 

int main()
{
	char cResult;
	cResult=ShowChar();
	printf("%c\n",cResult);
	return 0;
}

char ShowChar()
{
	int iNumber;
	printf("please input a number:\n");
	scanf("%d",&iNumber);
	return iNumber;
}
