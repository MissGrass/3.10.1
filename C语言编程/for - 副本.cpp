#include<stdio.h>
#include<math.h>

int main()
{
	float a=2,b=1,c,s=0;
	int i;
	
	for(i=1;i<=20;i++)
	{
		s=s+a/b;
		c=a;
		a=a+b;
		b=c;
	}
	printf("数列前二十项之和为：%f",s);
}
