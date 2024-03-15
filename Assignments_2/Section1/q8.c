/*Write a program that will calculate the price for a quantity entered from the keyboard, given
  that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
  percent discount for quantities over 50.*/


#include<stdio.h>
int main()
{

	int qnt;
	float price , discnt;
	printf("Enter the quantity of the product:\n");
	scanf("%d",&qnt);

	// printf("The price of 1 quantity is Rs 5\n");

	price = qnt * 5;
	//printf("the price of the %d is : %.2f\n",qnt,price);

	if (qnt >30 && qnt <50)
	{
		discnt = price - (10.0/price)*100;
		printf("dicounted price is Rs %.2f\n",discnt);
	}
	else if (qnt >50 )
	{
		discnt = price - (15.0/price)*100;
		printf("dicounted price is Rs %.2f\n",discnt);
	}
	else 
	{
		printf("the price of the %d is Rs %.2f\n",qnt,price);

	}

	return 0;
}
