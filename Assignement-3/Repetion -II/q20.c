/*Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500*/

#include<stdio.h>
int main(void)
{ 
 
 for (int i=2; i<100; i++) 
 { 
 	 for (int j=2; j<=i; j++)  
 		 { 
   			 if (i == j) 
     		 printf("%-4d",i); 
   			 else if (i%j == 0) 
     		 break; 
 		 } 
 } 

	return 0;
}
