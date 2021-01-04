#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//rand()라이브러리
#include <time.h>//srand 라이브러리

int ranlnputAry(int *a);

int main()
{
	int ary[5];
	int* p = NULL;
	p = ary;

	ranlnputAry(p);
	sizeof(ary) / sizeof(ary[0])
	return 0;



}

	int ranlnputAry(int *a)
	{
		srand(time(NULL));
		int random = 0;
		printf("랜덤 생성된 배열의 요소 :");
		for (int i = 0; i < 5; i++)
		{
			random = rand()%100;
			printf("%d ", random);
		}
		printf("\n");
	}