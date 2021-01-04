#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <stdlib.h>

int main()
{

	FILE* fp1;
	FILE* fp2;
	int input = 0;
	char buffer[50];

	fp1 = fopen("data03.txt", "r");
	fp2 = fopen("data03ex.txt", "w");
	while (!feof(fp1))
	{
		fgets(buffer, sizeof(buffer), fp1);
		fputs(buffer, fp2);
	
	}
	fclose(fp1);
	fclose(fp2);
	system("notepad.exe data03ex.txt");
	return 0;
	//fgets 버퍼 !feof함수 다시 복습하기
}