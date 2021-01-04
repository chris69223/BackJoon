#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char array1[] = { "C Language" };
	char array2[] = { "It is difficult" };
	char array3[] = { NULL };

	strcpy(array3, array1);
	strncat(array3, array2,strlen(array2)+1);
	puts(array3);
	//printf("array1, array2 ∞·«’ : %s", array3[]);

	
	return 0;
}