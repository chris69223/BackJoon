#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[4];
	int* p = arr;
	int** pp = &p;

	printf("[1. �ּ� ��]\n");
	printf("�迭�� �ּ� : &arr[0]=%x, &arr[1]=%x, &arr[2]=%x, &arr[3]=%x \n", p, p+1, p+2, p+3);
	printf("1���� �������� �ּ� : &p = %x, �� : *&p = %x \n", &p, p);
	*p = 0;
	*(p + 1) = 10;
	*(p + 2) = 20;
	*(p + 3) = 20;
	printf("2. 1���� �����͸� �̿��� �迭�� �� ����]\n");
	printf("arr[0]=%d,, arr[1]= %d, arr[2]=%d, arr[3]= %d \n",*p, *(p+1), *(p+2), *(p+3));

	printf("3. 2���� �����͸� �̿��� �迭�� �� ���]\n");
	printf("arr[0]=%d,, arr[1]= %d, arr[2]=%d, arr[3]= %d \n", **pp, *(*pp+1), *(*pp + 2), *(*pp + 3));

	return 0;

}
