#include<stdio.h>
#include<string.h>

int main()
{
	char user[20]={"mrsoft"};
	char password[20]={"mrkj"};
	char ustr[20],pwstr[20];
	int i=0;
	
	while(i<3)
	{
		printf("ÊäÈëÓÃ»§Ãû×Ö·û´®£º\n");
		gets(ustr);
		printf("ÊäÈëÃÜÂë×Ö·û´®£º\n");
		gets(pwstr);
		if(strcmp(user,ustr))
		{
			printf("ÓÃ»§Ãû×Ö·û´®ÊäÈë´íÎó£¡\n");
		}
		else
		{
			if(strcmp(password,pwstr))
			{
				printf("ÃÜÂë×Ö·û´®ÊäÈë´íÎó£¡\n");
			}
			else
			{
				printf("»¶Ó­Ê¹ÓÃ£¡\n");
				break;
			}
		}
		i++;
	}
	if(i==3)
	{
		printf("ÊäÈë×Ö·û´®´íÎó3´Î£¡\n"); 
	}
	return 0;
}
