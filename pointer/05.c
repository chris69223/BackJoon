#include <stdio.h>

void chang(int *a);

int main()
{
	int num = 10;
	int* p1 = NULL;
	p1 = &num;
	chang(p1);
	printf("%d\n", num);
	return 0;
}

void chang(int *a)
{
	*a = *a * 2;
}