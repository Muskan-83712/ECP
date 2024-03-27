/*Write a function to display given number in binary format.*/

#include<stdio.h>

void print_binary(unsigned char num)
{
	while(num > 0)
	{
		int rem = num % 2;
		num /= 2;
		if(rem == 0)
			printf("0");
		else
			printf("1");
//		num /= 2;
	}
	printf("\n");
}

int main(void)
{
	unsigned char num = 10;

	print_binary(num);
	printf("\n");
	return 0;
}




















