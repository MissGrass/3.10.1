#include<stdio.h>

int main()
{
	int a;
	a=9;
	
	a+=a*=a/=a-6;
	printf("a is:%d\n",a);
	return 0;
}
