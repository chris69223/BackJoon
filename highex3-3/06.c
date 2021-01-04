#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct animal
{
	int num;
	char name[10];
}Ani;

int main()
{
	int i = 0;
	Ani ani[3];
	FILE* fp1;
	fp1 = fopen("animal.txt", "r");
	
	for (i = 0; i < 3; i++)
	{
		fscanf(fp1, "%d %s", &ani[i].num, ani[i].name);
	}

	fclose(fp1);
	for (int i = 0; i < 3; i++)
	{
		while (ani[i].num !=0)
		{
			printf("%s ", ani[i].name);
			ani[i].num--;
		}
		printf("\n");
	}
	system("notepad.exe animal.txt");
	return 0;
}

