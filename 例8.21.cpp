#include<stdio.h>
#include<string.h>

int main()
{
	char text[50],connect[50];
	int num;
	
	printf("����һ���ַ�����\n");
	scanf("%s",&text);
	num=strlen(text);
	printf("�ַ����ĳ���Ϊ��%d\n",num);
	printf("������һ���ַ�����\n");
	scanf("%s",&connect);
	num=strlen(connect);
	printf("�ַ����ĳ���Ϊ��%d\n",num);
	strcat(text,connect);
	printf("�������ַ����������ӣ�%s\n",text);
	num=strlen(text);
	printf("���Ӻ���ַ�������Ϊ��%d\n",num);
	
	return 0;
}
