#include<stdio.h>
#include<stdio.h>

int main()
{
	int m,n,c,a,b;

	printf("����������������:\n");
	scanf("%d %d",&m,&n);
	b=m*n;
	
	while(1)
	{
		if(m>=n);
		else
		{
			c=m;
			m=n;
			n=c;
		}
		m=m-n;
		if(m==0) break;
	}
	printf("m��n�����Լ��Ϊ��%d\n",n);
	
	a=b/n;
	printf("m��n����С������Ϊ��%d\n",a);

} 
