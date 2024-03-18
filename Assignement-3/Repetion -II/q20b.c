//b. Armstrong Numbers between 1 to 500


#include<stdio.h>
int main(void)
{
	int num,rem,arm,temp;

	for(num=1 ; num<=500; num++)
	{
		temp = num;
		arm = 0;

		while(temp != 0)
		{
			rem = temp%10;
			arm = arm+ (rem*rem*rem);
			temp = temp/10;

		}
		if(arm == num)
			printf("%d\t",num);

	}


	return 0;
}
