/*���Զ���ĺ�����ʹ��static��̬�ֲ����α���������3������ֵ*/ 
#include<stdio.h>

void AddOne()
{
	static int A=3;
	A=A*3;
	printf("%d\n",A);
 } 
 int main()
 {
 	printf("��һ�ε��ã�");
	AddOne();
	printf("�ڶ��ε��ã�");
	AddOne();
	return 0; 
 }
