#include<stdio.h>

int main()
{
	int i;
	char String[7]={"mrsoft"};
	char Reverse[7]={0};
	int size;
	size=sizeof(String);
	
	for(i=0;i<6;i++)
	{
		Reverse[size-i-2]=String[i];
	}
	
	printf("Êä³öÔ´×Ö·û´®£º%s\n",String);
	printf("Êä³öÄ¿±ê×Ö·û´®£º%s\n",Reverse);
	
	return 0;
}
