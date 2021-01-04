#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int num;
	printf("원하는 입력 개수 : ");
	scanf("%d", &num);
	int* p = (int*) malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 숫자 :", i+1);
		scanf("%d", &p[i]);
		sum += p[i];
	}
	printf("입력 값의 총합 :%d\n", sum);

	free(p);
	p = NULL;

	return 0;
};