#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i;
	printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &num);
	int** p = (int**)malloc(sizeof(int*)*num); // 2���� �迭�� ����Ϸ��� �� ���� ���� �õ��� �� ����.
	for (i = 0; i < num; i++)
	{
		p[i] = (int*)malloc(sizeof(int)*num);
	}
	puts("-�迭�� ���-");

	for (i = 0; i < num; i++) 
	{
		for (int j = 0; j < num; j++)
		{
			p[i][j] = i * num + j +1;
			printf("%3d ",p[i][j]); // 1���� �迭�� ���� ��쿡�� i�� 3�� ����϶� ���๮�ڸ� �Է����ָ� �ȴ�.
		}
		printf("\n");
	}
	printf("\n�迭�� �밢�� ���");
	for (i = 0; i < num; i++) 
	{
		for (int j = 0; j < num; j++)
		{
			if(i==j) // 1���� �迭�� ��쿡�� num+1 % 0�� ���� ������ָ� �ȴ�.
				printf("%3d ",p[i][j]);
		}
			
	}
	for (i = 0; i < num; i++)
		free(p[i]);

	free(p);
	p = NULL;

	return 0;
}