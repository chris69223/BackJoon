#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printMenu(char *a, int b);


int main()
{
	int num;
	char menu[][50] = { "============MENU==================\n",
		"1. 1번메뉴입니다.\n","2. 2번 메뉴입니다.\n","0. 프로그램 종료\n\n" };
	int size = sizeof(menu) / sizeof(menu[0]);
	
	while (1)
	{
		printMenu(menu, size);
		printf("메뉴 번호를 입력하세요 :");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("1번 메뉴를 실행합니다.\n");
			break;
		case 2:
			printf("2번 메뉴를 실행합니다.\n");
			break;
		case 0:
			printf("프로그램을 종료합니다.\n");
			return 0;
		default:
			return 0;
		}
	}
	return 0;

}

void printMenu(char *a,int b)
{
	char(*p)[50] = a;
	for (int i = 0; i < b; i++)
		printf("%s",p[i]);
}