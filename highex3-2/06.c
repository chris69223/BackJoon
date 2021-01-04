#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char array[1000] = { NULL };
	printf("문장 입력 : ");
	gets(array);
	printf("입력한 문장 : ");
	puts(array);
	return 0;
}