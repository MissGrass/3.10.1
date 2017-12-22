#include<stdio.h>
#include<stdio.h>

int main()
{
	int m,n,c,a,b;

	printf("请输入两个正整数:\n");
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
	printf("m和n的最大公约数为：%d\n",n);
	
	a=b/n;
	printf("m和n的最小公倍数为：%d\n",a);

} 
