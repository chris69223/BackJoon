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
	Me stu = { "고영상", 2015150002, 3 };
	strcpy(stu.name, "고영상");
	printf("이름 %s: stu.name\n");
	printf("학번 : %d\n",stu.id);
	printf("학년 : %d\n", stu.grade);
	return 0;
}