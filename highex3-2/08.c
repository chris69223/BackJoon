#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>


int main()
{
	char id[] = "admin"; 
	char pw[] = "a1234";
	char id2[20];
	char pw2[20];
	int i;
	int buffer = 0;
	printf("���̵� �Է��ϼ��� : ");
	gets(id2);
	printf("�н����带 �Է��ϼ��� :");
	gets(pw2);
	/*for (i = 0; buffer != 13; i++) {
		pw2[i] = _getch();
		if (pw2[i] == '\0') {
			i--;
			continue;
		}
		_putch('*');
		buffer = (int)pw2[i];
	}
	*/

	if ((strcmp(id, id2) != 0))
		printf("\n���̵� ��ġ���� �ʽ��ϴ�\n");
	else if ((strcmp(pw, pw2) != 0))
		printf("\n�н��͵尡 ��ġ���� �ʽ��ϴ�.\n");
	else 
		printf("�α��� ����\n");

	return 0;
}



