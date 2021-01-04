#include <stdio.h>

int main()
{
	char a='A';
	int b=10;
	double c=3.14;

	char* cp = &a;
	int* ip = &b;
	double* dp = &c;

	printf("char형 포인터의 크기 : %d, char형 변수의 크기 : %d, char형 변수값: %c\n", sizeof(cp), sizeof(a), a);
	printf("int형 포인터의 크기 : %d, int형 변수의 크기 : %d, int형 변수값: %d \n", sizeof(int*), sizeof(b), b);
	printf("double형 포인터의 크기 : %d, double형 변수의 크기 : %d, double형 변수값: %lf \n", sizeof(double*), sizeof(c), c);
	return 0;
	
}