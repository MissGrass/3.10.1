#include<stdio.h>
#include<math.h>

int main()
{
	float a=2,b=1,c,s=0;
	int i=1;
	
	do
	{
		s=s+a/b;
		c=a;
		a=a+b;
		b=c;
		i++;
	}while(i<=20);
	printf("����ǰ��ʮ��֮��Ϊ��%f",s);	
}
