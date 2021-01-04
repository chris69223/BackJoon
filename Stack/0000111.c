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
	strcpy(st[0].name, "홍길동");
	strcpy(st[0].hobby, "축구");
	st[0].ID = 20142005113;

	strcpy(st[1].name, "최경호");
	strcpy(st[1].hobby, "축구");
	st[1].ID = 20132005234;

	strcpy(st[2].name, "권태민");
	strcpy(st[2].hobby, "축구");
	st[2].ID = 2014156004;

	printf("Function called by reference : % d and %d\n", ++(*x), (*y)++);

	return st;

}

void display_data(student* student, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("학번: % d, 이름 % s, 취미%s ", student[i].ID, student[i].name, student[i].hobby);
	}
}