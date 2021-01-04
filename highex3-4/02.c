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
	STU stu[100]; // 배열을 사용할 필요없이 포인터를 사용하여 접근할 수 있다.
	int sum = 0;
	int sum2 = 0;
	int num=0;
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int) * num);
	// p를 사용하지 않은 코드이다.
	for (int i = 0; i < num; i++)
	{
		printf("영어 성적, 수학 성적(예: 10 10): ");
		scanf("%d %d", &stu[i].eng, &stu[i].math); // 구조체 포인터를 사용하여 stu 대신 p를 사용할 수 있다.
		sum += stu[i].eng;
		sum2 += stu[i].math;
	}

	printf("[3 명의 학생의 성적 평균]\n");
	printf("영어 :%.2lf, 수학 : %.2lf\n",(double)sum/3, (double)sum2/3);

	free(p);
	p = NULL;

	return 0;
}
//