#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];
	printf("���ڿ� �Է� : ");
	gets(array);
	
	for(int i=0;i<strlen(array);i++)
	{
		if ((array[i] >= 65) && (array[i] <= 90))
		{
			array[i] = array[i] + 32;
		}
		else if ((array[i] >= 97) && (array[i] <= 122))
		{
			array[i] = array[i] - 32;
		}
		else 
		{
			continue;
		}
	}
	


	printf("��ȯ�� ���ڿ� : ");
	puts(array);
	return 0;
}