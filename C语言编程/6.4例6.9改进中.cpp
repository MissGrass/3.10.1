#include<stdio.h>

int main()
{
	float fDues;
	float fAmount;
	int iOntime;
	char cChar;
	
	printf("Enter dues amount:\n");
	scanf("%df",&fDues);
	printf("On Time?(y/n)\n");
	getchar(); 
	cChar=getchar();
	iOntime=(cChar=='y')?1:0;
	fAmount=iOntime?fDues:(fDues*1.1);
	printf("the Amount is:%.2f\n",fAmount);
	return 0;
}
