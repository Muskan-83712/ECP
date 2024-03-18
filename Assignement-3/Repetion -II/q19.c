//Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
//within the range.

#include<stdio.h>
int main()
{
	int n1,n2,res;
	printf("Enter the value of n1 (starting point):\n");
	scanf("%d",&n1);
	printf("Enter` the value of n2 (ending number):\n");
	scanf("%d",&n2);

	for(int i=1; i<=10; i++)
	{
		for(int j=n1; j<=n2; j++)
		{
			res = i*j;
			printf("%d\t",res);
		}
	printf("\n");

	}
	printf("\t");


	return 0;
}
