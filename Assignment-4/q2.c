//Write a function to calculate power.

#include<stdio.h>

int mpower(int ,int);

int main()
{

	int index,base;
	printf("Enter the index and base value\n");
	scanf("%d%d",&index,&base);

	printf("%d ^ %d = %d\n",index,base,mpower(index,base));

	return 0;
}

int mpower(int index,int base)
{

	int pow=1;
	for(int i=1; i<=index; i++)
	{
		pow = pow * base;
	}
	return pow;
}
