#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ranInputAry(int* a);
int main()
{
	int ary[5];
	int* p=ary;
	
	ranInputAry(ary);
	
	return 0;
}

void ranInputAry(int* a)//sizeof
{
	printf("랜덤 생성된 배열의 요소 :");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		printf("%3d", rand() % 100);
	printf("\n");
}