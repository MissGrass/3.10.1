#include<stdio.h>
 
int main()
{
	int Score;
	int iNumber=1;
	char Name;
	
	while(iNumber<=100)
	{
		printf("请输入学生姓名:\n");
		scanf("%c",&Name); 
		printf("请输入学生分数:\n");
		scanf("%d",&Score);
		printf("%c,%d\n",Name,Score);
		iNumber++;
	}
	
}
