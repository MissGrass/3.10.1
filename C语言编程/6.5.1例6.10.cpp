#include<stdio.h>

int main()
{
	char cGrade;
	printf("please enter your grade\n");
	scanf("%c",&cGrade);
	printf("Grade is about:");
	switch(cGrade)
	{
	case'A':
		printf("90~100\n");
		break;
	case'B':
		printf("80~89\n");
		break;
	case'C':
		printf("70~79\n");
		break;
	case'D':
		printf("60~69\n");
		break;
	case'E':
		printf("<60\n");
		break;
	default:
		printf("You enter the char is wrong!\n");
		break;
	}
	return 0;
}
