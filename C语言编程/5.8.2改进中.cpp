#include<stdio.h>

int main()
{
	int Goods;
	float Profit;
	int Wage=3000;
	float Monthlywage;
	
	printf("销售人员每月的基本工资是%d\n",Wage);

	printf("该销售人员月销售商品数是");
	scanf("%d",&Goods);
	Profit=Goods*1.5;
	printf("该销售人员月提成是%d\n",Profit);
	
	Monthlywage=Profit+Wage;
	printf("该销售人员月工资是%d\n",Monthlywage);
	return 0;
}
