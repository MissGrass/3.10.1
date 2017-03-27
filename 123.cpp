/*在自定义的函数中使用static静态局部整形变量，计算3的立方值*/ 
#include<stdio.h>

void AddOne()
{
	static int A=3;
	A=A*3;
	printf("%d\n",A);
 } 
 int main()
 {
 	printf("第一次调用：");
	AddOne();
	printf("第二次调用：");
	AddOne();
	return 0; 
 }
