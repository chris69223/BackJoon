#include <stdio.h>

void init(int* p, int num);

int main()
{
	int arr[3];
	
	printf("배열 초기화 전 : arr[0] = %d, arr[1] =%d, arr[2] =%d \n\n", arr[0], arr[1], arr[2]);

	init(arr, 3);
	printf("배열 초기화 : arr[0] = %d, arr[1] =%d, arr[2] =%d \n\n", arr[0], arr[1], arr[2]);
	return 0;

}

void init(int* p, int num)
{
	for (int i = 0; i < num; i++)
		*(p + i) = 0;
}
