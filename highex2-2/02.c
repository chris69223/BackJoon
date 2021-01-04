#include <stdio.h>

int main()
{
	int arr[2][2] = { 1,2,3,4, };
	printf("배열의 주소 출력 \n");
	
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d행%d열 : %#p %#p %#p \n", i, j, &(arr[i][j]), arr[i] + j, *(arr + i) + j);
		}
		
	}
	printf("배열의 값 출력 \n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d행%d열 : %d %d %d \n", i, j, arr[i][j], *&arr[i][j], *(arr[i]) + j);
		}

	}
}