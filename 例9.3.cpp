#include<stdio.h>

int Function(); 

int main()
{
	printf("this step is before the Function\n");
	Function();
	printf("this step is end of the Function\n");
	return 0;
}

int Function()
{
	printf("this step is in the Function\n");
}
