/*Write a function to print given number of terms of Fibonacci series.*/

#include<stdio.h>

int fib(int);
int main()
{
	int n;
	printf("Enter the numbers: ");
	scanf("%d",&n);

	fib(n);

	return 0;
}
int fib(int n)
{
	int t1=0, t2=1 ;
	printf("Fibonacci series : %d,%d, ",t1,t2);
	int nextTerm = t1+t2;
	for (int i=3; i<=n; i++)
		{
				printf("%d, ",nextTerm);
				{
					t1=t2;
					t2 = nextTerm;
					nextTerm = t1+t2;
				}
		}
}
