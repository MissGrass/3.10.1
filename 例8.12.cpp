#include<stdio.h>

int main()
{
	int i,j;
	int a[10];
	int iTemp;
	int iPos;
	printf("Ϊ����Ԫ�ظ�ֵ��\n");
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<9;i++)
	{
		iTemp=a[i];
		iPos=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<iTemp)
			{
				iTemp=a[j];
				iPos=j;
			}
		}
		a[iPos]=a[i];
		a[i]=iTemp;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");
	}
	
	return 0;
}
