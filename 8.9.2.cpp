#include<stdio.h>
 
int main()
{
	int Score;
	int iNumber=1;
	char Name;
	
	while(iNumber<=100)
	{
		printf("������ѧ������:\n");
		scanf("%c",&Name); 
		printf("������ѧ������:\n");
		scanf("%d",&Score);
		printf("%c,%d\n",Name,Score);
		iNumber++;
	}
	
}
