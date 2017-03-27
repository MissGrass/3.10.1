#include<stdio.h>

int main()
{
	int X=0,Y=0;

	printf("请输入一个数字");
	scanf("%d",&X); 

	if(X<1)
	{
		Y=X;
		printf("Y=%d",Y);
	}
	else if(X>=1&&X<10)
	{
		Y=2*X-1;
		printf("Y=%d",Y);
	}
	else
	{
		Y=3*X-11;
		printf("Y=%d",Y);
	}
	return 0;
}
