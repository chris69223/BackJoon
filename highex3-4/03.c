#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int num=0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		printf("���� �Է� : ");
		scanf("%d",&p[i]);
		sum += p[i];
		
	}

	printf("�Է��� ���� : ");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n���� : %d, ��� : %d", sum, sum / num); // ����� �Ҽ������� �� ��쿡�� double������ ����ȯ�� ���־�� �Ѵ�.
	free(p);
	p = NULL;

	return 0;
}