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
	de dep[3] = { { "��ǻ�Ͱ��к�", 550 , NULL }, 
	{ "���Ӱ��к�", 300 , NULL }, { "���ڰ��к�", 350 , NULL } };
	
	for(int i=0; i<(sizeof(dep) / sizeof(dep[0])) - 1;i++)
	{
		dep[i].link = &dep[i + 1];
	}

	dep[sizeof(dep) / sizeof(dep[0])-1].link == NULL;
	printf("-��ü �μ� ����-\n");
	while (dep[i].link == NULL)
	{
		printf("�μ� �̸� : %s \n", dep[i].name);
		printf("�μ� �ο� : %d \n\n", dep[i].person);
		i++;
	}
	/*
	printf("�μ� �̸� : %s \n",dep1.name);
	printf("�μ� �ο� : %d \n\n",dep1.person);

	printf("�μ� �̸� : %s \n", dep1.link->name);
	printf("�μ� �ο� : %d \n\n", dep1.link->person);
	
	printf("�μ� �̸� : %s \n", dep1.link->link->name);
	printf("�μ� �ο� : %d \n\n", dep1.link->link->person);
	*/
	
	return 0;
}