#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int arr[12];
	int* p = NULL;
	int res = 0;
	p = arr;
	
	*p = 10;
	p = p + 1;
	printf("%d %d %d %d", p[-1], p[1], p[2], arr[0]);
	return 0;

}



