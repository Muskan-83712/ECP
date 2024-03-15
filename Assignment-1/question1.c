#include<stdio.h>

/*
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/


int main()
{
  int num1 , num2, sum, diff, product;
  
  printf("Enter the numbers :\n");
  scanf("%d%d", &num1,&num2);

  sum = num1 + num2;
  printf("The sum of %d + %d = %d \n" ,num1,num2,sum);

  diff = num1-num2;
  printf("The differece of %d - %d  = %d \n" ,num1,num2,diff);

  product = num1*num2;
  printf("The product of %d * %d = %d \n" ,num1,num2,product);

  return 0;
}
