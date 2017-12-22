#include<stdio.h>
main()
{
	short i;
	short *p;
	printf("please input the number:\n");
	scanf("%d",&i);
	p=&i;
	printf("the result1 is:%d\n",p);
	p++;
	printf("the result2 is:%d\n",p);
}
