#include<stdio.h>
#include<math.h>

int main()
{
	float s=0,a=2,b=1,c;
	int i=1;
	
	while(i<=20)
	{
		s=s+a/b;
		c=a;
		a=a+b;
		b=c;
		i++;
	}
	printf("数列前二十项之和为：%f",s);
	return 0;
 } 
