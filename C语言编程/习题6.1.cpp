#include<stdio.h>

int main()
{
	int a=3,b=4,c=5;
	float x=1.2,y=2.4,z=-3.6,i,j,k;
	char ch='a';
	
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("x=%f,y=%f,z=%f\n",x,y,z);
	i=x+y;
	j=y+z;
	k=z+x;
	printf("x+y=%f,y+z=%f,z+x=%f\n",i,j,k);
	printf("ch='%c'or%d",ch,ch);
	return 0;
}
