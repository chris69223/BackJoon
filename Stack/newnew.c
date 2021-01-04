#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_tag {
	int ID;
	char name[32];
	char hobby[128];
} student;




student* get_data();


void display_data(student* st, int);

int main() {

	student* st = NULL;
	st = get_data();
	display_data(st, 3);
	return 0;
}

student* get_data() {
	student* st = NULL;

	st = (student*)malloc(sizeof(student) * 3);
	st[0].ID = 2013200234;
	strcpy(st[0].name, "고영상");
	strcpy(st[0].hobby, "ㄹㄴㅇ");
	 
	st[1].ID = 2013200234;
	strcpy(st[1].name, "최경호");
	strcpy(st[1].hobby, "축구");
	
	st[2].ID = 2014156004;
	strcpy(st[2].name, "권태민");
	strcpy(st[2].hobby, "축구");
	

	

	return st;

}

void display_data(student* student, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("학번: % d, 이름 :% s, 취미 :%s \n", student[i].ID, student[i].name, student[i].hobby);
	}
}