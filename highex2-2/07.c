#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int myStrcmp(char *, char *);

int main()
{
	int res=0;
	char arr[100];
	char arr1[100];
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", arr);
	printf("���� ���ڿ��� �Է��ϼ��� :");
	scanf("%s", arr1);
	res=myStrcmp(arr, arr1);
	if (res == 0)
		printf("�� ���ڿ��� ���� ���ڿ��Դϴ�.\n");
	else if (res == -1)
		printf("�� ���ڿ��� �ٸ� ���ڿ��Դϴ�.\n");

	return 0;

}

int myStrcmp(char *a, char *b)
{
	int k;
	k=strcmp(*&(a), *&(b));
	return k;
}