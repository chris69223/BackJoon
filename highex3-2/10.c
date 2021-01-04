#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];
	printf("문자열 입력 : ");
	gets(array);
	
	for(int i=0;i<strlen(array);i++)
	{
		if ((array[i] >= 65) && (array[i] <= 90))
		{
			array[i] = array[i] + 32;
		}
		else if ((array[i] >= 97) && (array[i] <= 122))
		{
			array[i] = array[i] - 32;
		}
		else 
		{
			continue;
		}
	}
	


	printf("변환된 문자열 : ");
	puts(array);
	return 0;
}