#include <stdio.h>

int main()
{
	char a='A';
	int b=10;
	double c=3.14;

	char* cp = &a;
	int* ip = &b;
	double* dp = &c;

	printf("char�� �������� ũ�� : %d, char�� ������ ũ�� : %d, char�� ������: %c\n", sizeof(cp), sizeof(a), a);
	printf("int�� �������� ũ�� : %d, int�� ������ ũ�� : %d, int�� ������: %d \n", sizeof(int*), sizeof(b), b);
	printf("double�� �������� ũ�� : %d, double�� ������ ũ�� : %d, double�� ������: %lf \n", sizeof(double*), sizeof(c), c);
	return 0;
	
}