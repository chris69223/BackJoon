#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


	FILE* fp1;
	char buffer[50];
	fp1 = fopen("a.txt", "w");
	gets(buffer, sizeof(buffer));

	while (strcmp(buffer,"exit")!=0)
	{
		fputs(buffer, fp1);
		gets(buffer, sizeof(buffer));
	}
	fclose(fp1);
	system("notepad.exe a.txt");
	return 0;

}