#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ftn(int* a, int b, int c);

int main()
{
	int arr[][3] = { 1,2,3,4,5,6 };
	ftn(arr, 2, 3);
	return 0;

}
void ftn(int* a, int b, int c)
{
	int(*p)[3] = a;
	for (int i = 0; i < b; i++) 
	{
		for (int j = 0; j < c; j++) 
		{
			printf("arr[i][j] = %d	",*(p[i]+j));
		}
		printf("\n");
	}
}