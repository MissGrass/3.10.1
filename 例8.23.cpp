#include<stdio.h>
#include<time.h>

int main()
{
	int command[4]={0,1,2,3};
	int num;
	struct tm *sysTime;
	printf("����Ҫ��������������0��\n");
	printf("�������������\n");
	
	while(1)
	{
		scanf("%d",&num);
		if(command[0]==num)
		{
			printf("��������1��ʾϵͳ���ڣ���������2��ʾϵͳʱ�䣬��������3�˳�ϵͳ��\n");
		}
		else if(command[1]==num)
		{
			time_t nowTime;
			time(&nowTime);
			sysTime=localtime(&nowTime);
			printf("ϵͳ���ڣ�%d-%d-%d\n",1900+sysTime->tm_year,sysTime->tm_mon+1,sysTime->tm_mday);
		}
		else if(command[2]==num)
		{
			time_t nowTime;
			time(&nowTime);
			sysTime=localtime(&nowTime);
			printf("ϵͳʱ�䣺%d:%d:%d\n",sysTime->tm_hour,sysTime->tm_min,sysTime->tm_sec);
		}
		else if(command[3]==num)
		{
			return 0;
		}
		printf("�������������\n");
	}
	
	return 0;
}
