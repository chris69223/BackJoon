#include <stdio.h>

int main()
{
	int arr[2][2] = { 1,2,3,4, };
	printf("�迭�� �ּ� ��� \n");
	
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d��%d�� : %#p %#p %#p \n", i, j, &(arr[i][j]), arr[i] + j, *(arr + i) + j);
		}
		
	}
	printf("�迭�� �� ��� \n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d��%d�� : %d %d %d \n", i, j, arr[i][j], *&arr[i][j], *(arr[i]) + j);
		}

	}
}