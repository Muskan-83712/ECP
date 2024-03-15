/*Write a program to display number of days in the given month and year using
a. Using If else ladder*/


#include<stdio.h>
int main()
{
 int month , year;

 printf("Enter the month number and year\n");
 scanf("%d%d",&month,&year);

 if (month == 1)
printf("No of days is 31\n");


else if(month == 3)
printf("No of days is 31\n");


else if (month == 4)
printf("No of days is 30\n");


else if (month == 5)
printf("No of days is 31\n");


else if (month == 6)
printf("No of days is 30\n");


else if (month == 7)
printf("No of days is 31\n");


else if (month == 8)
printf("No of days is 31\n");


else if (month == 9)
printf("No of days is 30\n");


else if (month == 10)
printf("No of days is 31\n");


else if (month == 11)
printf("No of days is 30\n");


else if (month == 12)
printf("No of days is 31\n");


else if (month == 2 && (year %4 == 0 && (year%400 == 0 || year%100 !=0)))
printf("No of days is 29\n");
else
printf("No of days is 28\n");

return 0;
}

