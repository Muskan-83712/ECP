//Write a program to convert temperature in Celsius to Fahrenheit and vice versa.


#include<stdio.h>
int main()
{
  float c,f;

  printf("Enter the temperature in celcius:\n");
  scanf("%f",&c);

  f = ((9.0/5) * c) + 32;
  printf("The temperature in Farenheit is %f\n",f);

  printf("Enter the temperature in farenheit:\n");
  scanf("%f",&f);

  c = ((5/9.0) *(f-32));
  printf("The temperature in Celcius is %f\n",c);


return 0;
}
