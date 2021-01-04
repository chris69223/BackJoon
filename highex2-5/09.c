#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void voidPrint(void *a);

int main()
{
	char c[] = "Hello World!";
	void* vx = &c;
	
	voidPrint(vx);
	return 0;
}

void voidPrint(void  *a)
{
	
	printf("%s", (char*)a);
}