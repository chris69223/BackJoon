#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(int argc, char* argv[])
{
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d + %d = %d\n",a, b, a + b);
	return 0;
	
	
}