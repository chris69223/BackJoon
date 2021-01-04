#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];
	int cnt = 0;
	int snt = 0;
	printf("문자열 입력 : ");
	gets(array);
	printf("입력한 문자열 : ");
	puts(array);
	for (int i = 0; i < strlen(array); i++) 
	{
		if (islower(array[i])) 
		{
			cnt++;
		}
		else if (isupper(array[i]))
		{
			snt++;
		}
	}
	printf("소문자 개수 : %d\n", cnt);
	printf("대문자 개수 : %d\n", snt);
	
	return 0;
}