/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/


#include<stdio.h>

int calculate(int ,char, int);
int flag;
int main()
{
	int num1 ,num2,result;
	char opr,choice;
	
	do
	{

		printf("Enter num1 operand and num2\n");
		scanf("%d %c %d",&num1,&opr,&num2);

	
		result = calculate(num1, opr, num2);
		printf("%d %c %d = %d\n",num1,opr,num2,result);

		printf("Do you want to continue ? (y/n) : \n");
		scanf("%*c%c",&choice);

	}while(choice != 'n' && choice != 'N');

	return 0;
}

int calculate(int num1, char opr, int num2)
{

	int result;

	switch(opr)
	{

		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 -num2;
			break;
		
		case '*':
			result = num1 * num2;
			break;

		case '/':
			result = num1/num2;
			break;
	}
	return result;
}