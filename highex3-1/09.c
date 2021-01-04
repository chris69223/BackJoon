#include  <stdio.h>

typedef struct department 
{
	char name[20];
	int person;
	struct department* link;
}de;
int main()
{
	int i = 0;
	de dep[3] = { { "컴퓨터공학부", 550 , NULL }, 
	{ "게임공학부", 300 , NULL }, { "전자공학부", 350 , NULL } };
	
	for(int i=0; i<(sizeof(dep) / sizeof(dep[0])) - 1;i++)
	{
		dep[i].link = &dep[i + 1];
	}

	dep[sizeof(dep) / sizeof(dep[0])-1].link == NULL;
	printf("-전체 부서 정보-\n");
	while (dep[i].link == NULL)
	{
		printf("부서 이름 : %s \n", dep[i].name);
		printf("부서 인원 : %d \n\n", dep[i].person);
		i++;
	}
	/*
	printf("부서 이름 : %s \n",dep1.name);
	printf("부서 인원 : %d \n\n",dep1.person);

	printf("부서 이름 : %s \n", dep1.link->name);
	printf("부서 인원 : %d \n\n", dep1.link->person);
	
	printf("부서 이름 : %s \n", dep1.link->link->name);
	printf("부서 인원 : %d \n\n", dep1.link->link->person);
	*/
	
	return 0;
}