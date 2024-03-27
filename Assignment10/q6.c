/*Write a function to swap two numbers using XOR operatio*/

#include<stdio.h>

void swap(int *pn1, int *pn2)
{
	*pn1 = *pn1 ^ *pn2;
	*pn2 = *pn1 ^ *pn2;
	*pn1 = *pn1 ^ *pn2;
}


int main(void)
{
	int n1 = 10, n2 = 20;

	printf("Before swap : n1 = %d, n2 = %d\n", n1, n2);

	swap(&n1, &n2);

	printf("After swap : n1 = %d, n2 = %d\n", n1, n2);
	return 0;
}




















