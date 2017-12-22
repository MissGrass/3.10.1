#include<stdio.h>
int main()
{
	int a=3,b=4,c=5;
	double x=1.2,y=2.4,z=-3.6;
	char ch='a';
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("x=%.2f,y=%.3f,z=%.1f\n",x,y,z);
	printf("x+y=%.2f,y+z=%.2f,z+x=%.2f\n",x+y,y+z,z+x);
	printf("ch='%c'or%d\n",ch,ch);
	return 0;
}
