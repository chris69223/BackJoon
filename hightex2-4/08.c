#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printMenu(char *a, int b);


int main()
{
	int num;
	char menu[][50] = { "============MENU==================\n",
		"1. 1���޴��Դϴ�.\n","2. 2�� �޴��Դϴ�.\n","0. ���α׷� ����\n\n" };
	int size = sizeof(menu) / sizeof(menu[0]);
	
	while (1)
	{
		printMenu(menu, size);
		printf("�޴� ��ȣ�� �Է��ϼ��� :");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("1�� �޴��� �����մϴ�.\n");
			break;
		case 2:
			printf("2�� �޴��� �����մϴ�.\n");
			break;
		case 0:
			printf("���α׷��� �����մϴ�.\n");
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