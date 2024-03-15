//Write a program to accept a number and print the number in character, decimal, octal and hex formats

#include<stdio.h>
int main()
{
int num;

printf("Enter the number :");
scanf("%d",&num);

//number in character
printf("The number %d in character is : %c\n",num,num); 

//number in decimal
printf("The number %d in decimal is : %d\n",num,num); 

//number in octal
printf("The number %d in octal is : %o\n",num,num); 

//number in hexadecimal
printf("The number %d in hexadecimal is : %x\n",num,num); 

return 0;
}
