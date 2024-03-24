/*Write a function to calculate power using recursion*/

#include<stdio.h>
int power(int , int);
int main(void)
{
	int index, base, result;
	printf("Enter the base and index\n");
	scanf("%d %d",&base,&index);
	
	result = power(base,index);
	printf("%d ^ %d = %d\n",base,index,result);

	return 0;
}
int power(int base, int index)
{

	if(index != 0)
		return (base * power(base,index-1));
	else 
		return 1;


}
