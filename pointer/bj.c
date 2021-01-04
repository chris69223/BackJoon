#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 1000000
int main()
{
	int max = 0;
	int mini = 0;
	int num;
	scanf("%d", &num);
	
	int arr[MAX_SIZE];
	for (int i = 0; i < num; i++)
	{
		scanf("%d ", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else
		{
			mini = arr[i];
		}

	}
	printf("최솟값은 %d, 최댓값은 %d입니다\n", mini, max);
	return 0;

}
