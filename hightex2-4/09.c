#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int res; 
	char arr[50];
	char* p = NULL;
	p = arr;
	printf("��ȣ���� �Է��ϼ��� \n->");
	scanf("%[^\n]s", p);
	res = strlen(p);

	printf("�ص��� ��ȣ�� \n->");
	for (int i = 0; i < res; i++)
	{
		if ((*(p + i) <= 90 && ((*(p + i)) >= 68))) 
		{
			*(p + i) = *(p + i) - 3;
			printf("%c", *(p + i));
		}
		else if ()
		{

		}
		else if ((*(p + i) <= 67 && ((*(p + i)) >= 65)));
		{
			*(p + i) = *(p + i) + 23;
			printf("%c", *(p + i));
		}
	
	}

	return 0;

}    