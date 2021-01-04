#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include< stdlib.h>

int main() 
{
	int num = 0, sum = 0;
	char ary[100] = {0,};
	scanf("%d", &num);
	scanf("%d", ary);
	for (int i = 0; i < num; i++)
		sum += (ary[i] - '0');
	printf("%d", sum);
	return 0;
}