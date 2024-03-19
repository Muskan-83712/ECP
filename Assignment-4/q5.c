//Write a function to print a given character for a given number of times.

#include<stdio.h>

char func(int,char);
int main()
{

	int num;
	char ch;

	printf("Enter the number: ");
	scanf("%d",&num);

	printf("Enter the character: ");
	scanf("%*c%c",&ch);

	func(num , ch);


	return 0;
}
char func(int num, char ch)
{
	for(int i=1; i<=num; i++)
		printf("%c",ch);

	printf("\n");
}
