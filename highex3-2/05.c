#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int num2;
	printf("srand �� ���� �� �Է� :");
	scanf("%d", &num);
	srand(num);
	printf("������ ���ڴ�?:");
	scanf("%d", &num2);
	if (num2 == rand() % 100) 
	{
		printf("����! \n");
	}
	else
	{
		printf("����! ���� :%d\n", rand() % 100);
	}
	return 0;
}