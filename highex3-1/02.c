#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student
{
	char* id[20];
	char* name[20];
	int* birth;
}STUDENT;

int main()
{
	STUDENT stu;
	printf("�й��� �Է��ϼ��� :");
	scanf("%s", stu.id);
	printf("�����̸��� �Է��ϼ��� :");
	scanf("%s", stu.name);
	printf("����⵵ �Է��ϼ��� : ");
	scanf("%d", &stu.birth);
	printf("%d��� %s�� �й��� %s�Դϴ�.\n", stu.birth, stu.id, stu.name);

}