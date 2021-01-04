#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* string1();
char* string2();

int main()
{

	char *cp1 = string1();
	char *cp2 = string2();

	printf("%s %s \n",cp1,cp2);

}

char* string1()
{
	static char arr1[]= "Hello";
	return arr1;
}

char* string2()
{
	static char arr2[] = "C World";
	return arr2;
}