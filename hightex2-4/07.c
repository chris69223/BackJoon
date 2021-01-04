#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	//int  ary[4][4];
	int start = 0;
	int(*p)[sizeof(ary)/sizeof(ary[0])] = NULL;
	p = ary;
	
	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++) {
			ary[i][j] = start+1;
			start++;
			
		}

	}
	printf("---배열의 요소---\n");
	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++)
		{
				printf("%d	", p[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	printf("배열의 대각선 요소 ");
	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++)
		{
			if (i==j)
			{
				printf("%d	, ", p[i][j]);
			
			}
			
		}
	
	}
	printf("\n\n");
	return 0;
}