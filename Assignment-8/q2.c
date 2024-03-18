/*Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t *s);

int main(void)
{
	stud_t s1;

	accept_student(&s1);
	print_student(&s1);

	return 0;
}

void accept_student(stud_t *s)
{
	printf("Enter the student info(rollno,name,marks)\n");
	scanf("%d %s %f",&s->rollno, s->name, &s->marks);

}
void print_student(stud_t *s)
{

	printf("rollno = %d, name =%s, marks=%f\n",s->rollno, s->name, s->marks);
}
