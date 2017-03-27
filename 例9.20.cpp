#include<stdio.h>

int iGlobalPrice=100;

void Store1Price();
void Store2Price();
void Store3Price();
void ChangePrice();

int main()
{
	printf("the chain store's original price is:%d\n",iGlobalPrice);
	Store1Price();
	Store2Price();
	Store3Price();
	
	ChangePrice();
	printf("the chain store's present price is:%d\n",iGlobalPrice);
	Store1Price();
	Store2Price();
	Store3Price();
	return 0;
}


void Store1Price()
{
	printf("store1's price is:%d\n",iGlobalPrice);
}

void Store2Price()
{
	printf("store2's price is:%d\n",iGlobalPrice);
}

void Store3Price()
{
	printf("store3's price is:%d\n",iGlobalPrice);
}

void ChangePrice()
{
	printf("What price do you want to change?  the price is:");
	scanf("%d",&iGlobalPrice);
}
 
