/*Write a function to calculate factorial of a given number using recursion.*/

#include<stdio.h>

int fact(int num)
{
	int res;
	if(num <= 0)
		return 1;
	res = num * fact(num-1);
	return res;

}
int main(void)
{
	int num , result;
	printf("Enter the number\n");
	scanf("%d",&num);

	result = fact(num);
	printf("The factorial of %d is  %d\n",num,result);
	return 0;

}

