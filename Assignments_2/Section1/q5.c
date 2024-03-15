/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.*/

#include<stdio.h>
int main()
{
 int n1,n2,n3;
 printf("Entter three numbers :\n");
 scanf("%d%d%d",&n1,&n2,&n3);
 
 // using if else

if ((n1>n2) && (n1>n3))
{
printf("n1 is greater\n");

}
else if ((n2>n1)&&(n2>n3))
printf("n2 is greater\n");

else
printf("n3 is greater\n");

// using conditional operator
 
((n1>n2) && (n1>n3)) ? printf("n1 is greater") : ((n2>n1) && (n2>n3) ? printf("n2 is greater") : printf("n3 is grater"));
 
return 0;
}
