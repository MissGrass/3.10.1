#include<stdio.h>

int main()
{
	int iMonth=0,iDay=0;
	printf("enter the mouth you want to know the days\n");
	scanf("%d",&iMonth);
	switch(iMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		iDay=31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		iDay=30;
		break;
	case 2:
		iDay=28;
		break;
	default:
		iDay=-1;
		break;
	}
	
	if(iDay==-1)
	{
		printf("there is a error with you enter\n");
	}
	else
	{
		printf("2010.%d has %d days\n",iMonth,iDay);
	}
	return 0;
}
