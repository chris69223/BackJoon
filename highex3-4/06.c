#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int eng;
	int math;
}stu;

int main()
{
	 //����ü �����͸� ����Ͽ� �����Ҵ�
	int sum = 0;
	int sum2 = 0;
	int num = 0;
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	stu* p = (stu*)malloc(sizeof(stu) * num);
	// p�� ����� �ڵ�
	for (int i = 0; i < num; i++)
	{
		printf("���� ����, ���� ����(��: 10 10): ");
		scanf("%d %d", &p[i].eng, &p[i].math); // ����ü �����͸� ����Ͽ� stu ��� p�� ����� �� �ִ�.
		sum += p[i].eng;
		sum2 += p[i].math;
	}

	printf("[3 ���� �л��� ���� ���]\n");
	printf("���� :%.2lf, ���� : %.2lf\n", (double)sum / 3, (double)sum2 / 3);

	free(p);
	p = NULL;

	return 0;
}