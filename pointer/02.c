#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int** pp = NULL;
	int* p2 = NULL;
	int* p1 = NULL;
	a = 10;
	p1 = &a;
	pp = &p2;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	b = 20;
	p1 = &b;
	pp = &p2;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	c = 30;
	p2 = &c;
	pp = &p2;
	printf("a=%d, b=%d, c=%d\n", a, b, *p2);
	return 0;

}