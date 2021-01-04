/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20

int main()
{
	int s;
	char arr[MAX_SIZE];
	printf("문자열을 입력하세요 :");
	scanf("%s", arr);

	s = strlen(arr);

	for (int i = s-1; i >=0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;

}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	
	char arr[20] = {NULL};
	printf("문자열을 입력하세요 :");
	scanf("%s", arr);

	//s = strlen(arr);

	for (int i =sizeof(arr); i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;

}

in


