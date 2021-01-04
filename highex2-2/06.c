#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	
	char arr[20];
	char eng;
	printf("문자열을 입력하세요 :");
	scanf("%s", &arr);
	getchar();
	printf("찾을 문자를 입력하세요 : ");
	scanf("%c", &eng );
	printf("문자 '%c'는");
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == eng) 
		{
			printf("%d", arr[i]);
			break;
		}
		else
		{
			printf("문자 'c'는 문자열 내에 존재하지 않습니다.");
		}
	}
	printf("번째에 위치해 있습니다\n");

	return 0;

}
