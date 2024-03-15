/*Write a program to find maximum of two numbers using
  a. If – else
  b. conditional operator.*/


#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers \n");
	scanf("%d%d",&num1,&num2);

	// using if else statment

	if(num1 > num2)
	{
		printf("Number %d is maximum \n",num1);
	}
	else
	{
		printf("Number %d is maximum \n",num2);
	}

	// using conditional operator

	(num1>num2 ? printf(" %d is maximum",num1): printf("%d is maximum",num2));
	
	return 0;
}
