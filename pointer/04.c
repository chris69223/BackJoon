#include <stdio.h>

int main()
{
	int num1 = 10;
	int* ip = &num1;
	int** ipp = &ip;

	printf("%d %d \n",**ipp, *ip);
	return 0;
}