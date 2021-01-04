#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0;
	int mini = 0;
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		printf("숫자를 입력하세요 : ");
		scanf("%d", &array[i]);
		if (array[i] > max)
		{
			max = array[i];
		}
		else
		{
			mini = array[i];
		}

	}
	printf("입력한 수의 최솟값은 %d, 최댓값은 %d입니다\n", mini, max);
	return 0;

}
