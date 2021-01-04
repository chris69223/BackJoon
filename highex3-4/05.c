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
	fp1 = fopen("department.txt", "r");
	int i = 0;
	de* p = (de*)malloc(sizeof(de)*5);//윤주야 우리가 해냈어
	
	for (i = 0; i < 5; i++)
	{
		fscanf(fp1, "%s %d", &p[i].name, &p[i].person);
	} // link로 다음 배열을 연결할 수 있도록 시도해볼 것
	// 연결이 성공하면 link로만 접근하여 출력해보는 것도 좋은 방법
	/*
	for (i = 0; i <4; i++)
	{
		p[i].link = &p[i + 1];
	}*/
	
	for (i = 0; i < 5; i++)
	{
		
		printf("%s	/", p[i].name);
		printf("%d \n", p[i].person);

		//p = p->link;
	}
	
	fclose(fp1);
	free(p);
	p = NULL;
	return 0;
}




