#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int num=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		printf("숫자 입력 : ");
		scanf("%d",&p[i]);
		sum += p[i];
		
	}

	printf("입력한 숫자 : ");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n총합 : %d, 평균 : %d", sum, sum / num); // 평균이 소수점까지 갈 경우에는 double형으로 형변환을 해주어야 한다.
	free(p);
	p = NULL;

	return 0;
}