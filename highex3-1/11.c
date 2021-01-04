#include  <stdio.h>

typedef struct department
{
	char name[20];
	int person;
	struct department* link;
}de;

void myPrint(de* dep);

int main()
{
	de dep1 = { "컴퓨터공학부", 550 , NULL };
	de dep2 = { "게임공학부", 300 , NULL };
	de dep3 = { "전자공학부", 350 , NULL };
	printf("-전체 부서 정보-\n");
	myPrint(&dep1);

}

void myPrint(de* dep)
{

	for (int i = 0; i < )

		for ()
			printf("부서 이름 : %s \n", dep1.name);
	printf("부서 인원 : %d \n\n", dep1.person);


}