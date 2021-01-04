#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void area(double* dp);

int main()
{
	int r;
	void* vp = NULL;
	vp = &r;
	printf("반지름 입력 :");
	scanf("%d",&r);
	(double*)vx = &r;
	area(vp);

	
}

void area(double* dp)
{
	
	
	printf("%2lf", (double*)dp*dp*3.14);
}