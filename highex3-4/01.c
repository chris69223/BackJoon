#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int num;
	printf("���ϴ� �Է� ���� : ");
	scanf("%d", &num);
	int* p = (int*) malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
	{
		printf("%d��° ���� :", i+1);
		scanf("%d", &p[i]);
		sum += p[i];
	}
	printf("�Է� ���� ���� :%d\n", sum);

	free(p);
	p = NULL;

	return 0;
};