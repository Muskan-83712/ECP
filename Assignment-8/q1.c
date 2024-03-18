/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.*/

#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stud_t;


int main(void)
{
	stud_t s1;

	printf("Enter the roll no of student:\n");
	scanf("%d",&s1.rollno);

	printf("Enter the name of student:\n");
	scanf("%*c%[^\n]s",s1.name);

	printf("Enter the marks of student:\n");
	scanf("%f",&s1.marks);

	printf("roll no = %d, name= %s, marks= %f\n",s1.rollno, s1.name, s1.marks);


	return 0;
}
