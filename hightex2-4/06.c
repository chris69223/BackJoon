#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int  ary[3][3];
	int(*p)[3] = NULL;
	p = ary;
	printf("정수 입력 : ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			scanf("%d", &ary[i][j]);
			
		}
	
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", p[i][j]);
		}
		printf("\n");
	}
	printf("");
	return 0;
}