#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <stdlib.h>
typedef struct student
{
	char num[5];
	int t1;
	int t2;
}student;
int main()
{
	student stu[3];
	FILE* fp1;
	FILE* fp2;
	int input = 0;
	int i = 0;

	fp1 = fopen("data.txt", "r");

	for (int i = 0; i < 3; i++)
		fscanf(fp1, "%s %d %d", stu[i].num, &stu[i].t1, &stu[i].t2);

	fclose(fp1);

	fp2 = fopen("data1.txt", "w");
	for (i = 0; i < 3; i++) {
		fprintf(fp2, "학생번호: %s, 시험1: %d, 시험2: %d\n", stu[i].num, stu[i].t1, stu[i].t2);
	}

	fclose(fp2);
	system("notepad.exe data1.txt");
	return 0;
}