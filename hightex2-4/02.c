/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char arr[12];
	char* p = NULL;
	int res = 0;
	p = arr;
	printf("���ڿ� �Է�(���� �Ұ�) : ");
	scanf("%s", arr);
	printf("���ڿ� ��� : ");
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
	char* arr = (char*)malloc(sizeof(char) * 12);//�迭 �Է� ���� 
								//�����Ҵ����� �迭����
	printf("���ڿ� �Է�(���� �Ұ�):");
	//scanf("%[^\n]s", arr);
	gets(arr);
	printf("���ڿ� ��� : %s \n", arr);

	free(arr);
	arr = NULL;
	return 0;
}


