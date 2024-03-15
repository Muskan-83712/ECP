/*Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.*/


#include<stdio.h>
int main()
{

int month,year ;

printf("Enter the month number and year\n");
scanf("%d%d",&month,&year);


//using logical operator

if(month == 1 || month ==3 || month==5 || month==7 || month==8 ||month==10 ||month==12)
printf("No of days is 31\n");


else if (month == 4 || month ==6 || month==9 || month==11)
printf("No of days is 30\n");

else if(month == 2 && (year%4 == 0 && (year %400 || year%100)))

printf("No of days is 29\n");
else 
printf("No of days is 28 in this month\n");

return 0;
}
