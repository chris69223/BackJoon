#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	int st = 0;
	char* arr = (char*)malloc(sizeof(char) * 12);//�迭 �Է� ���� 
								//�����Ҵ����� �迭����
	printf("���ڿ� �Է�(���� �Ұ�):");
	scanf("%s", arr);
	printf("���ڿ� ��� : %s \n", arr);
	st = strlen(arr);
	
	printf("���� ���� (a->?):");
	for (int i = 0; i < st; i++) 
	{
		if (arr[i] == 'a')
		{
			arr[i] == '?';
			printf("%c",arr[i]);
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