#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int eng;
	int math;
}STU;

int main()
{
	STU stu[100]; // �迭�� ����� �ʿ���� �����͸� ����Ͽ� ������ �� �ִ�.
	int sum = 0;
	int sum2 = 0;
	int num=0;
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int) * num);
	// p�� ������� ���� �ڵ��̴�.
	for (int i = 0; i < num; i++)
	{
		printf("���� ����, ���� ����(��: 10 10): ");
		scanf("%d %d", &stu[i].eng, &stu[i].math); // ����ü �����͸� ����Ͽ� stu ��� p�� ����� �� �ִ�.
		sum += stu[i].eng;
		sum2 += stu[i].math;
	}

	printf("[3 ���� �л��� ���� ���]\n");
	printf("���� :%.2lf, ���� : %.2lf\n",(double)sum/3, (double)sum2/3);

	free(p);
	p = NULL;

	return 0;
}
//