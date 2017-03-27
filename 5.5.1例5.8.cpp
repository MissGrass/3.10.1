#include<stdio.h>

int main()
{
	long iLong;
	short iShort;
	int iNumber1=1;
	int iNumber2=2;
	char cChar[10];
	
	printf("Enter the long integer\n");
	scanf("%ld",&iLong);
	
	printf("Enter the short integer\n");
	scanf("%hd",&iShort);
	
	printf("Enter the number:\n");
	scanf("%d*%d",&iNumber1,&iNumber2);
	
	printf("Enter the string but only show three character\n");
	scanf("%3s",cChar);
	
	printf("the long interger is:%ld\n",iLong);
	printf("the short interger is:%ld\n",iShort);
	printf("the Number1 is:%d\n",iNumber1);
	printf("the Number2 is:%d\n",iNumber2);
	printf("the three character are:%s\n",cChar);
	return 0;
}
