/*ite a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is  3*/


#include<stdio.h>
int main()
{
	int num1,num2,i,numerator,denominator,remainder;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	if (num1>num2)
	{
		numerator = num1;
		denominator = num2;
	}
	else
	{
		numerator = num2,
		denominator = num1;
	}

	remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    int gcd = denominator;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);

	return 0;
}
