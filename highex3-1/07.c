#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student
{
	int math;
	int eng;
	
}Student;

typedef struct me
{
	char name[10];
	int id;
	int grade;
	Student s;
}Me;


int main()
{
	Me stu = { "����", 2015150002, 3 ,{100,90} };
	strcpy(stu.name, "����");
	printf("�̸� %s: stu.name\n");
	printf("�й� : %d\n", stu.id);
	printf("�г� : %d\n", stu.grade);
	printf("�������� : %d   �������� : %d\n", stu.s.math, stu.s.eng);
	return 0;
}