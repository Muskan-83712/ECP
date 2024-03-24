/*Write function to check whether given year is leap or not. Write another function to print
number of days in given month*/

#include<stdio.h>

void is_leap(int);
int no_of_days(int);
int main()
{
	int yr;
	printf("Enter the year :\n");
	scanf("%d",&yr);
	
	is_leap(yr);

	int month;
	printf("Enter the month number\n");
	scanf("%d",&month);

	no_of_days(month);
	return 0;
}

void is_leap(int yr)
{
	if((yr%4 == 0) || ((yr%100 == 0) && (yr%400 == 0)))
		printf("%d is a leap year\n",yr);
	else
		printf("%d is not a leap year\n",yr);
}
int no_of_days(int month)
{
	if(month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12 )
		printf("Number of days in this month is 31\n");

	else if(month ==4 || month ==6 || month ==9 || month ==11)
		printf("Number of days in this month is 30\n");

	else
		printf("number of days is 28 or 29 days\n");

}
