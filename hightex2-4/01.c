#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[4];
	int* p = arr;
	int** pp = &p;

	printf("[1. 주소 비교]\n");
	printf("배열의 주소 : &arr[0]=%x, &arr[1]=%x, &arr[2]=%x, &arr[3]=%x \n", p, p+1, p+2, p+3);
	printf("1차원 포인터의 주소 : &p = %x, 값 : *&p = %x \n", &p, p);
	*p = 0;
	*(p + 1) = 10;
	*(p + 2) = 20;
	*(p + 3) = 20;
	printf("2. 1차원 포인터를 이용한 배열의 값 저장]\n");
	printf("arr[0]=%d,, arr[1]= %d, arr[2]=%d, arr[3]= %d \n",*p, *(p+1), *(p+2), *(p+3));

	printf("3. 2차원 포인터를 이용한 배열의 값 출력]\n");
	printf("arr[0]=%d,, arr[1]= %d, arr[2]=%d, arr[3]= %d \n", **pp, *(*pp+1), *(*pp + 2), *(*pp + 3));

	return 0;

}
