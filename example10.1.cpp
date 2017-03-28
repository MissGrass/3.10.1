#include<stdio.h>
main()
{
	int a,b;
	int *ipointer1,*ipointer2;
	scanf("%d,%d",&a,&b);
	ipointer1=&a;
	ipointer2=&b;
	printf("The number is:%d,%d\n",*ipointer1,*ipointer2);
}
