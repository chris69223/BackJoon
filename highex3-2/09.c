#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];
	int cnt = 0;
	int snt = 0;
	printf("���ڿ� �Է� : ");
	gets(array);
	printf("�Է��� ���ڿ� : ");
	puts(array);
	for (int i = 0; i < strlen(array); i++) 
	{
		if (islower(array[i])) 
		{
			cnt++;
		}
		else if (isupper(array[i]))
		{
			snt++;
		}
	}
	printf("�ҹ��� ���� : %d\n", cnt);
	printf("�빮�� ���� : %d\n", snt);
	
	return 0;
}