#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int st = 0;
	char* arr = (char*)malloc(sizeof(char) * 12);//배열 입력 말고 
								//동적할당으로 배열만듬
	printf("문자열 입력(공백 불가):");
	scanf("%s", arr);
	printf("문자열 출력 : %s \n", arr);
	st = strlen(arr);

	printf("문자 변경 (a->?):");
	for (int i = 0; i < st; i++)
	{
		if (arr[i] == 'a')
		{
			arr[i] == '?';
			printf("%c", arr[i]);
		}
		else
		{
			printf("%c", arr[i]);
		}
	}

	free(arr);
	arr = NULL;
	return 0;
}