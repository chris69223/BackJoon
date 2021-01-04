#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student
{
	int math;
	int eng;

}Student;

typedef struct me
{
	char name[10];
	int id;
	int grade;
	Student s;
}Me;


int main()
{
	int cnt = 0;
	double ma = 0;
	double en = 0;
	int max = 0;
	Me stu[3] = { {"박정민", 2010123456, 4 ,
	{100,90}}, {"이정민", 2011789456, 3 ,{100,95}},
	{"노정민", 2012811523, 2 ,{80,100}} };
	strcpy(stu[0].name, "고영상");
	for (int i = 0; i < 3;i++) {

		ma += stu[i].s.math;
	}
	for (int i = 0; i < 3; i++) {

		en += stu[i].s.eng;
	}

	printf("전체 수학 점수 평균 : %.2lf", ma / 3);
	printf("전체 영어 점수 평균 : %.2lf", en / 3);
	for (int i = 0; i < 3 ; i++)
	{
		if ((stu[i].s.eng + stu[i].s.math) > max) 
		{
			max = stu[i].s.eng + stu[i].s.math;
			cnt++;
		}
		
	}
	printf("총점이 가장 높은 사람은 %s입니다. (총점 %d)", stu[cnt-1].name, max);
	return 0;
}