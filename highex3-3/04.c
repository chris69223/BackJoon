#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE* fp1;
	char buffer[50];

	fp1 = fopen("hello.txt", "w");
	fgets(buffer, sizeof(buffer), stdin);
	fputs(buffer, fp1);
	fclose(fp1);
	system("notepad.exe hello.txt");
	return 0;
	//fgets ���� !feof�Լ� �ٽ� �����ϱ�
}