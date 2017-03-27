#include<stdio.h>
#include<math.h>

int main()
{
	double fResultSin;
	double fResultCos;
	double fResultTan;
	
	double fXsin=0.5;
	double fXcos=0.5;
	double fXtan=0.5;
	
	fResultSin=sin(fXsin);
	fResultCos=cos(fXcos);
	fResultTan=tan(fXtan);
	
	printf("the sin of %lf is %lf\n",fXsin,fResultSin);
	printf("the cos of %lf is %lf\n",fXcos,fResultCos);
	printf("the tan of %lf is %lf\n",fXtan,fResultTan);
	
	return 0;
}
