#include <stdio.h>
#include <string.h>

int main()
{
	char array[20];
	printf("�̸� �Է� :");
	gets(array);
	puts("�� ���ھ� ��� ");
	for (int i = 0; i < strlen(array); i++)
		printf("%c\n",array[i]);
	return 0;
}