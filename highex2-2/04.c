#include <stdio.h>

int main()
{
	int i, j;
	int ary[4][4];
	//¿ì -2n+1
	//¾Æ·¡ 2n+1
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			ary[i][j] = i * i - j * j;
		}	
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d	", ary[i][j]);
		}
		printf("\n");

	}
	return 0;
	
}
