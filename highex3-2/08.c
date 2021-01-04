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
	printf("아이디를 입력하세요 : ");
	gets(id2);
	printf("패스워드를 입력하세요 :");
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
		printf("\n아이디가 일치하지 않습니다\n");
	else if ((strcmp(pw, pw2) != 0))
		printf("\n패스와드가 일치하지 않습니다.\n");
	else 
		printf("로그인 성공\n");

	return 0;
}



