#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	
	char arr[20];
	char eng;
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", &arr);
	getchar();
	printf("ã�� ���ڸ� �Է��ϼ��� : ");
	scanf("%c", &eng );
	printf("���� '%c'��");
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == eng) 
		{
			printf("%d", arr[i]);
			break;
		}
		else
		{
			printf("���� 'c'�� ���ڿ� ���� �������� �ʽ��ϴ�.");
		}
	}
	printf("��°�� ��ġ�� �ֽ��ϴ�\n");

	return 0;

}
