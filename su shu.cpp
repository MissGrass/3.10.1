#include<stdio.h>
#include<math.h>

int main()
{
	int num,i,k,a;
	
	for(num=101;num<=2000;num+=2)
	{
		k=sqrt(num);
		for(i=2;i<=k;i++)
		{
			if(num%i==0) break;
		}
		if(i>k)
		{
			printf("%4d ",num);
			a++;
			if(a%10==0) printf("\n");
		}
	}
}
