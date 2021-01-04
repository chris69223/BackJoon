#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i;
	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &num);
	int** p = (int**)malloc(sizeof(int*)*num); // 2차원 배열을 사용하려고 한 것이 좋은 시도인 것 같다.
	for (i = 0; i < num; i++)
	{
		p[i] = (int*)malloc(sizeof(int)*num);
	}
	puts("-배열의 요소-");

	for (i = 0; i < num; i++) 
	{
		for (int j = 0; j < num; j++)
		{
			p[i][j] = i * num + j +1;
			printf("%3d ",p[i][j]); // 1차원 배열로 했을 경우에는 i가 3의 배수일때 개행문자를 입력해주면 된다.
		}
		printf("\n");
	}
	printf("\n배열의 대각선 요소");
	for (i = 0; i < num; i++) 
	{
		for (int j = 0; j < num; j++)
		{
			if(i==j) // 1차원 배열일 경우에는 num+1 % 0인 값을 출력해주면 된다.
				printf("%3d ",p[i][j]);
		}
			
	}
	for (i = 0; i < num; i++)
		free(p[i]);

	free(p);
	p = NULL;

	return 0;
}