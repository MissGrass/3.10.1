#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("����Ŀ���ַ�����\n");
	gets(str1);
	printf("����Դ�ַ�����\n");
	gets(str2);
	
	printf("���Ŀ���ַ�����\n");
	puts(str1);
	printf("���Դ�ַ�����\n");
	puts(str2);
	strcat(str1,str2);
	printf("����strcat���������ַ������ӣ�\n");
	printf("�ַ�������֮���Ŀ���ַ�����\n");
	puts(str1);
	
	return 0;
}
