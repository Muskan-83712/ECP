//Write a program to accept a number and print unique pairs of numbers such that multiplication of the pair is given number

#include<stdio.h>
int main()
{
	int num,i=1;
	printf("Enter the number");
	scanf("%d",&num);

	while(i <= num)
	{
		if( num%i == 0)
		{
			if(i <= (num/i))
			printf("%d * %d = %d\n",i,num/i,num);
	
		}
	i++;
	}

	return 0;
}
