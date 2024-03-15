//Write a program to accept three integer numbers and find its averag


#include<stdio.h>
int main()
{

int num1,num2,num3;
float avg;
printf("Enter three integers\n");


printf("enter the first number\n");
scanf("%d",&num1);


printf("enter the second number\n");
scanf("%d",&num2);

printf("enter the third number\n");
scanf("%d",&num3);

avg = (num1+num2+num3)/3.0;
printf("The average is %f",avg);

return 0;
}
