/*Write a function to accept array of student’s information from the user. Write another function
to print the array student’s information. Re-use these functions in rest of the assignments
wherever required.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
		int rollno;
		char name[20];
		float marks;

}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t *s);

void accept_arr(stud_t *arr);
void print_arr(stud_t *arr);

int main()
{
	int i;
	stud_t *arr = (stud_t *)malloc(3 * sizeof(stud_t));
	accept_arr(&arr[i]);
	print_arr(&arr[i]);

	free(arr);

	return 0;
}

void accept_student(stud_t *s)
{

	printf("Enter student details : (rollno, name, marks) :\n");
	scanf("%d %s %f",&s->rollno,s->name,&s->marks);
}
void print_student(stud_t *s)
{

	printf("rollno = %d,name = %s,marks = %f\n",s->rollno,s->name,s->marks);
}
void accept_arr(stud_t *arr)
{
	for(int i=0; i<3; i++)
		accept_student(&arr[i]);

}
void print_arr(stud_t *arr)
{
	for(int i=0; i<3; i++)
		print_student(&arr[i]);

}
