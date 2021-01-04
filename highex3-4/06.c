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
	 //구조체 포인터를 사용하여 동적할당
	int sum = 0;
	int sum2 = 0;
	int num = 0;
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &num);
	stu* p = (stu*)malloc(sizeof(stu) * num);
	// p를 사용한 코드
	for (int i = 0; i < num; i++)
	{
		printf("영어 성적, 수학 성적(예: 10 10): ");
		scanf("%d %d", &p[i].eng, &p[i].math); // 구조체 포인터를 사용하여 stu 대신 p를 사용할 수 있다.
		sum += p[i].eng;
		sum2 += p[i].math;
	}

	printf("[3 명의 학생의 성적 평균]\n");
	printf("영어 :%.2lf, 수학 : %.2lf\n", (double)sum / 3, (double)sum2 / 3);

	free(p);
	p = NULL;

	return 0;
}