#include<stdio.h>
main()
{
	int i;
	char *month[]=
	{
		"January",
		"February",
		"Mrach",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	for(i=0;i<12;i++)
		printf("%s\n",month[i]);
 } 
