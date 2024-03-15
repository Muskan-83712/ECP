//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main()
{
int num ;
printf("Enter the number:\n");
scanf("%d",&num);

if(num > 0)
{
printf("The number is positive\n");
}
else if (num < 0)
printf("The number is negative\n");

else
printf("The number is zero\n");
 

return 0;
}
