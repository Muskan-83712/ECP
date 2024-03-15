/*Write a program to display number of days in the given year. Check condition for leap year. A
  year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
  years.
  a. Without using logical operators
  b. Using logical operators
  c. Conditional operator*/


#include<stdio.h>
int main()
{

	int yr,month=2;
	int is_leap = 0;

	printf("Enter the year:\n");
	scanf("%d",&yr);

	// display no of days

	if ((month == 2) && ((yr%400 == 0) || (yr %100 != 0) && (yr %4 == 0)))
		printf("No of days in %d is 366\n",yr);
	else
		printf("No of days in %d is 365\n",yr);



	// without using logical opearators
	if (yr % 4 == 0){
		if (yr % 100 != 0)
			is_leap =1;
		else {
			if (yr % 400 == 0)
				is_leap = 1;
		}
	}

	if (is_leap)
		printf("%d is a leap year.\n",yr);

	else
		("%d is not a leap year.\n",yr);



	//with using logical operator

	if ((yr % 4 == 0) && ((yr %400 == 0)||(yr % 100 != 0)))
		printf("%d is a leap year\n",yr);

	else
		printf("%d is a not leap year\n",yr);

	// using conditional operator

	(yr % 4 == 0) && ((yr %400 == 0)||(yr % 100 != 0)) ? printf("%d is a leap year\n",yr) : printf("%d is not a leap year\n",yr);
	return 0;
}
