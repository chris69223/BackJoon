#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int a, int b, int* c);

int main()
{
	int a = 10, b = 20, res;
	sum(a, b, &res);
	printf("res = %d = \n" , res);
	return 0;


}

void sum(int a, int b, int* c) 
{
	 *c = a + b;
}
