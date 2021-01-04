#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int *findAry(int *ary, int size, int num);

int main()
{
	int *ip;
	int num, ary[5] = { 1,2,3,4,5 };
	printf("찾을 숫자를 입력하세요 : ");
	scanf("%d", &num);

	ip=findAry(ary, sizeof(ary)/sizeof(ary[0]), num);

	if (ip == NULL)
		printf("숫자가 존재하지 않습니다.\n");
	else
		printf("%p\n", ip);
}

int *findAry(int *ary, int size, int num) 
{
	

	for (int i = 0; i < size; i++)
	{
		if (num == *(ary + i))
		{
			return (ary + i);
		}	
			
	}
	return NULL;

}