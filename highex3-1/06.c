#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct me 
{
	char name[10];
	int id;
	int grade;

}Me;

int main() 
{
	Me stu = { "����", 2015150002, 3 };
	strcpy(stu.name, "����");
	printf("�̸� %s: stu.name\n");
	printf("�й� : %d\n",stu.id);
	printf("�г� : %d\n", stu.grade);
	return 0;
}