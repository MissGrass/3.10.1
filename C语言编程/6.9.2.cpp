#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("����������������\n"); 
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a<c)
		{
			printf("%d",c);
		}
		else
		{
			printf("%d",a);
		}
	}
	else
	{
		d=a;
		a=b;
		b=d;
		if(a<c)
		{
			printf("%d",c);
		}
		else
		{
			printf("%d",a);
		}
	}
	return 0;
}
