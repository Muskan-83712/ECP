/*Write a function to check whether given character is alphabet or not. If it is alphabet, perform
its bitwise XOR operation with value 32 and observe the result.*/

#include<stdio.h>

int alphabet(char ch)

{
	int result;
	if (ch >=65 || ch <=90 && ch>=97 || ch<=12)
		printf("the %c is a alphabet\n",ch);
	else
		printf("This is not a alphabet\n");


}
int main()
{

	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);

	alphabet(ch);

	return 0;
}
