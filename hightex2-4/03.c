#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//a���� ?�� ���� 
//���� ���� �ƹ��ų� �Է����� �� ���ϴ� ���ڷ� �ٲ��ִ� ���α׷� ¥�����
int main()
{
	char arr[20];
	char* p = NULL;
	int res = 0;
	p = arr;
	printf("���ڿ� �Է�(���� �Ұ�) : ");
	scanf("%s", arr);
	printf("���ڿ� ��� : ");
	res = strlen(arr);	
	for (int i = 0; i <= res; i++)
	{
		printf("%c", *(p + i));
	}
	printf("\n");
	printf("���� ����(a->?): ");
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
