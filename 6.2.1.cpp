/*使用if语句模拟信号灯指挥车辆行驶*/
#include<stdio.h>

int main()
{
	int iSignal;
	printf("the Red Light is 0,the Green Light is 1\n");
	scanf("%d",&iSignal);
	
	if(iSignal==1)
	{
		printf("the Light is green,cars can run\n");
	}
	if(iSignal==0)
	{
		printf("the Light is red,cars can't run\n");
	}
	return 0;
}
