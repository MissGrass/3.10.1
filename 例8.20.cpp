#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],change[20];
	int num;
	int i=0;
	
	while(1)
	{
		printf("����ת����Сд��ʽ��1��ʾ��д��2��ʾСд��0��ʾ�˳�����\n");
		scanf("%d",&num);
		if(num==1)
		{
			printf("����һ���ַ�����\n");
			scanf("%s",&text);
			strcpy(change,text);
			strupr(change);
			printf("ת���ɴ�д��ĸ���ַ���Ϊ��%s\n",change);
		}
		else if(num==2)
		{
			printf("����һ���ַ�����\n");
			scanf("%s",&text);
			strcpy(change,text);
			strlwr(change);
			printf("ת����Сд��ĸ���ַ���Ϊ��%s\n",change);
		}
		else if(num==0)
		{
			break;
		}
		
	}
	
	return 0;
}
