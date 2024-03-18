#include<stdio.h>

//Write a program to print the tables of the numbers from 1 to 10.

int main()
{
	printf("Tables from 1 to 10;\n");

	for(int i=1;i<=10;++i)
	{
		for(int j=1;j<=10;++j)
		printf("%d*%d=%d\t",i,j,i*j);
	}
//	printf("\n");



	return 0;
}
