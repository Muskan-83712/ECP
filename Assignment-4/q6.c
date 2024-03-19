/*Write a function to print Pascal triangle of given number of rows*/
#include<stdio.h>

void pascal_triangle(int);
int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	printf("\n");
	
	pascal_triangle(rows);

	return 0;
}
void pascal_triangle(int rows)
{

	int coef = 1, space;
	for(int i=0; i<rows; i++)
	{
		for(space=1; space <= rows-i; space++)
			printf(" ");

		for(int j=0; j <= i; j++)
		{
			if (j==0 || i==0)
				coef = 1;
			else
				coef = coef*(i-j+1)/j;

			printf("%4d", coef);
		}
		printf("\n\n");
	}


}
