#include<stdio.h>

int main()
{
	int Goods;
	float Profit;
	int Wage=3000;
	float Monthlywage;
	
	printf("������Աÿ�µĻ���������%d\n",Wage);

	printf("��������Ա��������Ʒ����");
	scanf("%d",&Goods);
	Profit=Goods*1.5;
	printf("��������Ա�������%d\n",Profit);
	
	Monthlywage=Profit+Wage;
	printf("��������Ա�¹�����%d\n",Monthlywage);
	return 0;
}
