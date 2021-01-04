#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int num2;
	printf("srand 속 인자 값 입력 :");
	scanf("%d", &num);
	srand(num);
	printf("생성된 숫자는?:");
	scanf("%d", &num2);
	if (num2 == rand() % 100) 
	{
		printf("정답! \n");
	}
	else
	{
		printf("오답! 정답 :%d\n", rand() % 100);
	}
	return 0;
}