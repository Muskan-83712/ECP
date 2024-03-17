
//program to calcultae factorial of a given number

#include<stdio.h>
#include<math.h>

int fact(int num);
int main()
{
	int num ,res;
	printf("Enter the number\n");
	scanf("%d",&num);

	res = fact(num);
	printf("The factorial of %d is %d\n",num,res);

	return 0;
}

int fact(int num)
{
	int fact =1;

	for(int i=1; i<=num; i++)
	{
		fact = fact * i;
	}
	return fact;
}
