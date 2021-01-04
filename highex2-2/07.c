#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int myStrcmp(char *, char *);

int main()
{
	int res=0;
	char arr[100];
	char arr1[100];
	printf("문자열을 입력하세요 :");
	scanf("%s", arr);
	printf("비교할 문자열을 입력하세요 :");
	scanf("%s", arr1);
	res=myStrcmp(arr, arr1);
	if (res == 0)
		printf("두 문자열은 같은 문자열입니다.\n");
	else if (res == -1)
		printf("두 문자열은 다른 문자열입니다.\n");

	return 0;

}

int myStrcmp(char *a, char *b)
{
	int k;
	k=strcmp(*&(a), *&(b));
	return k;
}