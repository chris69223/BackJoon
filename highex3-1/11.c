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
	de dep1 = { "��ǻ�Ͱ��к�", 550 , NULL };
	de dep2 = { "���Ӱ��к�", 300 , NULL };
	de dep3 = { "���ڰ��к�", 350 , NULL };
	printf("-��ü �μ� ����-\n");
	myPrint(&dep1);

}

void myPrint(de* dep)
{

	for (int i = 0; i < )

		for ()
			printf("�μ� �̸� : %s \n", dep1.name);
	printf("�μ� �ο� : %d \n\n", dep1.person);


}