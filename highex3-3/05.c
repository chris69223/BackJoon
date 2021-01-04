#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct department
{
	char name[20];
	int person;
	struct department* link;
}de;

int main()
{
	FILE* fp1;
	//char buffer[50];
	fp1 = fopen("department.txt", "w");
	int i = 0;
	de dep[3] = { { "컴퓨터공학부", 550 , NULL },
	{ "게임공학부", 300 , NULL }, { "전자공학부", 350 , NULL } };

	printf("-전체 부서 정보-\n");

	for (i = 0; i < (sizeof(dep) / sizeof(dep[0])) - 1; i++)
	{
		dep[i].link = &dep[i + 1];
	}

	for (i = 0; i < (sizeof(dep) / sizeof(dep[0])); i++)
	{
		printf("부서 이름 : %s \n", dep[i].name);
		printf("부서 인원 : %d \n\n", dep[i].person);

	}

	for (i = 0; i < (sizeof(dep) / sizeof(dep[0])); i++)
	{
		fprintf(fp1, " %s  %d\n", dep[i].name, dep[i].person);

	}

	fclose(fp1);
	system("notepad.exe department.txt");
	return 0;
}

