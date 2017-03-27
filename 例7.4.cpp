#include<stdio.h>
#include<stdlib.h>

int main()
{
	int counter;
	
	for(counter=0;counter<10;counter++)
	{
		srand(counter+1);
		printf("Random number %d is:%d\n",counter,rand());
	}
	return 0;
}
