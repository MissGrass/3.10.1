#include<stdio.h>

extern char *GetString(char *pString);
extern void ShowString(char *pString);

int main()
{
	char *pMyString;
	pMyString=GetString("Hello!");
	ShowString(pMyString);
	
	return 0;
}


extern char *GetString(char *pString)
{
	return pString;
}

extern void ShowString(char *pString)
{
	printf("%s\n",pString);
}
