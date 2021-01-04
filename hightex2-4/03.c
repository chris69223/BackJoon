#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//a값만 ?로 변경 
//나는 문자 아무거나 입력했을 때 원하는 문자로 바꿔주는 프로그램 짜고싶음
int main()
{
	char arr[20];
	char* p = NULL;
	int res = 0;
	p = arr;
	printf("문자열 입력(공백 불가) : ");
	scanf("%s", arr);
	printf("문자열 출력 : ");
	res = strlen(arr);	
	for (int i = 0; i <= res; i++)
	{
		printf("%c", *(p + i));
	}
	printf("\n");
	printf("문자 변경(a->?): ");
	for (int i = 0; i <= res; i++)
	{
		if (*(p+i)== 'a' )
		{
			*(p + i) = '?';
			printf("%c", *(p + i));
		 =	
		}
		else
			printf("%c", *(p + i));
	}
	return 0;

}
/*
*/
