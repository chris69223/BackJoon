/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char arr[12];
	char* p = NULL;
	int res = 0;
	p = arr;
	printf("문자열 입력(공백 불가) : ");
	scanf("%s", arr);
	printf("문자열 출력 : ");
	res = strlen(arr);
	for (int i=0;i<=res;i++)
	{
		printf("%c",*(p+i));
	}
	printf("\n");
	return 0;

}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* arr = (char*)malloc(sizeof(char) * 12);//배열 입력 말고 
								//동적할당으로 배열만듬
	printf("문자열 입력(공백 불가):");
	//scanf("%[^\n]s", arr);
	gets(arr);
	printf("문자열 출력 : %s \n", arr);

	free(arr);
	arr = NULL;
	return 0;
}


