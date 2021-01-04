#include<stdio.h>
#include <stdlib.h>

typedef struct student_tag {
	int ID;
	char name[32];
	char hobby[128];
} student;




student* get_data();


void display_data(student* st);

int main(int argc, char** argv) {
	
	student* st = NULL;
	st = get_data(&a, &b, &c);
	display_data(st, 3);
	return 0;
}

student* get_data(int* x, int* y, int* z) {
	student* st = NULL;

	st = (student*)malloc(sizeof(student) * 3);
	strcpy(st[0].name, "ȫ�浿");
	strcpy(st[0].hobby, "�౸");
	st[0].ID = 20142005113;

	strcpy(st[1].name, "�ְ�ȣ");
	strcpy(st[1].hobby, "�౸");
	st[1].ID = 20132005234;

	strcpy(st[2].name, "���¹�");
	strcpy(st[2].hobby, "�౸");
	st[2].ID = 2014156004;

	printf("Function called by reference : % d and %d\n", ++(*x), (*y)++);

	return st;

}

void display_data(student* student, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("�й�: % d, �̸� % s, ���%s ", student[i].ID, student[i].name, student[i].hobby);
	}
}