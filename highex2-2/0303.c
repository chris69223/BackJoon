#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0;
	int mini = 0;
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &array[i]);
		if (array[i] > max)
		{
			max = array[i];
		}
		else
		{
			mini = array[i];
		}

	}
	printf("�Է��� ���� �ּڰ��� %d, �ִ��� %d�Դϴ�\n", mini, max);
	return 0;

}
