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
	Me stu = { "고영상", 2015150002, 3 ,{100,90} };
	strcpy(stu.name, "고영상");
	printf("이름 %s: stu.name\n");
	printf("학번 : %d\n", stu.id);
	printf("학년 : %d\n", stu.grade);
	printf("수학점수 : %d   영어점수 : %d\n", stu.s.math, stu.s.eng);
	return 0;
}