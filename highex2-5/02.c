#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(int* p, int num);
void change(int* p, int index, int num1);

int main()
{
	int index, num1;
	int arr[3];
	init(arr, 3);
	printf("1. �迭 �ʱ�ȭ : arr[0] = %d, arr[1] =%d, arr[2] =%d\n", arr[0], arr[1], arr[2]);
	printf("2. �迭�� �� �Է�\n");
	printf("�迭�� �ε��� : ");
	scanf("%d", &index);
	printf("�迭�� �� : ");
	scanf("%d", &num1);
	change(arr,index, num1);
	printf("3. ��� ��� : arr[0] = %d, arr[1] =%d, arr[2] =%d\n", arr[0], arr[1], arr[2]);
	return 0;

}

void init(int* p, int num)
{
	for (int i = 0; i < num; i++)
		*(p + i) = 0;
}

void change(int* p, int index, int num1)
{
	*(p + index) = num1;
}
