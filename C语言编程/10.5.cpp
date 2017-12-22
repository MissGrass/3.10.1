#include<stdio.h>
main()
{
	int i;
	int *p;
	printf("please input the number:\n");
	scanf("%d",&i);
	p=&i;
	printf("the result1 is:%d\n",p);
	p++;
	printf("the result2 is:%d\n",p);
}
