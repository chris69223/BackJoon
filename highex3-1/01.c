#include <stdio.h>

typedef struct TestScore 
{
	double id;
	double first;
	double second;

}SCORE;

typedef struct class
{
	char name;
	SCORE s;


}CLASS;

int main()
{
	double result = 0;
	double result1 = 0;
	CLASS stu[3] = { {"A", 01, 96, 78},
	{"A", 02, 86, 86 }, {"A", 03, 74, 92 }
};
	CLASS stu1[3] = { {"B", 01, 96, 84},
	{"B", 02, 80, 88 }, {"B", 03, 66, 100 }
	};

	for (int i = 0; i < 3; i++)
		result += stu[i].s.first;
	for (int i = 0; i < 3; i++)
		result1 += stu1[i].s.first;
printf("두 반의 성적 평균 비교 \n");
printf("1차: A반 %.2lf점, B반 %.2lf점 \n", result / 3, result1 / 3);
printf("1차: A반 %.2lf점, B반 %.2lf점 \n", (stu[0].s.second+ stu[1].s.second + stu[2].s.second)/3  , (stu1[0].s.second + stu1[1].s.second + stu1[2].s.second) / 3);
return 0;
}