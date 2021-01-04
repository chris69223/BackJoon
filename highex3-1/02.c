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
	printf("학번을 입력하세요 :");
	scanf("%s", stu.id);
	printf("영문이름을 입력하세요 :");
	scanf("%s", stu.name);
	printf("출생년도 입력하세요 : ");
	scanf("%d", &stu.birth);
	printf("%d년생 %s의 학번은 %s입니다.\n", stu.birth, stu.id, stu.name);

}