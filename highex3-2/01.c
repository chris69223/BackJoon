#include <stdio.h>
#include <string.h>

int main()
{
	char array[20];
	printf("이름 입력 :");
	gets(array);
	puts("한 글자씩 출력 ");
	for (int i = 0; i < strlen(array); i++)
		printf("%c\n",array[i]);
	return 0;
}