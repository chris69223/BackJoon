#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int temp;
	int max = 0, mini = 0;
	scanf("%d", &num);
	scanf("%d", &temp);
	max = temp;
	mini = temp;
	
	for (int i = 1; i < num; i++)
	{
		scanf("%d", &temp);
		if (max < temp)
		{
			max = temp;
		}
		else if (mini > temp)
		{
			mini = temp;
		}
	}
	printf("%d %d", mini, max);
	return 0;
}