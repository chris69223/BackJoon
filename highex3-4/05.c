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
	de* p = (de*)malloc(sizeof(de)*5);//���־� �츮�� �س¾�
	
	for (i = 0; i < 5; i++)
	{
		fscanf(fp1, "%s %d", &p[i].name, &p[i].person);
	} // link�� ���� �迭�� ������ �� �ֵ��� �õ��غ� ��
	// ������ �����ϸ� link�θ� �����Ͽ� ����غ��� �͵� ���� ���
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




