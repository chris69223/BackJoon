#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char array[1000] = { NULL };
	printf("���� �Է� : ");
	gets(array);
	printf("�Է��� ���� : ");
	puts(array);
	return 0;
}