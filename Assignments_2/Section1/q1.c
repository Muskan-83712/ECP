/*Write a program to accept two numbers and display division of the two numbers. Check for
  divide by zero error. If divider is zero then display appropriate error message.*/


#include<stdio.h>
int main()
{

	int n1,n2;

	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);

	if(n2 != 0)
	{
		printf("division of two numbers is %d\n",n1/n2); 
	}
	else
	{
		printf("invalid divider , it will give error\n");
	}



	return 0;
}
