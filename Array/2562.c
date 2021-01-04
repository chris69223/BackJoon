#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[9];
	int cnt = 0;
	int max = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &ary[i]);
		if (max < ary[i])
		{
			max = ary[i];
			cnt = i;
		}
	
	}
	printf("%d\n", max);
	printf("%d\n", cnt+1);
	return 0;
}