/*
   Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
   triangle. Use sqrt() function from math.h to calculate square root.
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,per;
	float area,s;

	printf("Enter the length of the three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);

	per = (a*b)+(b*c)+(c*a);
	printf("The perimeter of the triangle is %d\n",per);


	s = ((a+b+c)/2);
	area = (s*(s-a)*(s-b)*(s-c));
	printf("The area of triangle is %f\n",sqrt(area));


	return 0;
}
