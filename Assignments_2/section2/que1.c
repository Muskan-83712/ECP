//Write a program to display number of days in the given month and year using switch case statement.

#include<stdio.h>
int main()
{
	int month , year ;

	printf("Enter the month number and year\n");
	scanf("%d%d",&month,&year);

	switch(month)
	{

		case 1:  
			printf("No of days = 31\n");
            break;

		case 3:  
			printf("No of days = 31\n");
			break;


		case 4:  
			printf("No of days = 30\n");
			break;


		case 5:  
			printf("No of days = 31\n");
			break;

		case 6:  
			printf("No of days = 30\n");
			break;

		case 7:  
			printf("No of days = 31\n");
			break;

		case 8:  
			printf("No of days = 31\n");
			break;

		case 9:  
			printf("No of days = 30\n");
			break;

		case 10:  
			printf("No of days = 31\n");
			break;

		case 11:  
			printf("No of days = 30\n");
			break;

		case 12:  
			printf("No of days = 31\n");
			break;

		case 2:
			if ((year%4 == 0) &&( year%400 == 0 || year%100 !=0))
				printf("No of days = 29\n");
			else 
				printf("No of days = 28\n");
				break;

		default:
			printf("invalid month , please enter between 1-12\n");  

	}

	return 0;
}
