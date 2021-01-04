#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct DlistNode {
	char name[30];//���� �̸�
	char author[30];//
	int id;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

DlistNode *head;
DlistNode *tail;

void init();//���Ḯ��Ʈ �ʱ�ȭ �Լ� 
void dinsert();//�� ��带 phead�� �����ʿ� ����
void dremove();//�����Լ�
void search();//Ž�� �Լ�
void display();// ��� �Լ�
int menu();

int main()
{
}


int menu()
{
	int num;
	printf("---------------MENU---------------\n");
	printf("1.���� ������ �߰��ϼ���: \n");
	printf("2.���� ������ �����ϼ���:\n");
	printf("3.ã�� ������ �Է��ϼ���:\n");
	printf("4.���� ��� ��ü ��� \n");
	printf("0.����\n");
	printf("\n�޴� ��ȣ�� �Է��ϼ��� :");
	scanf("%d", &num);
	return num;
}

void init()//�ʱ�ȭ �Լ�
{
	head = (DlistNode *)malloc(sizeof(DlistNode));
	tail = (DlistNode *)malloc(sizeof(DlistNode));
	head->rlink = tail;
	//head->llink=NULL;
	//tail->rlink = NULL;
	tail->llink = head;

}

void dinsert(char*name, char*author, int id)//���� �Լ�
{

	DlistNode *newnode = (DlistNode *)malloc(sizeof(DlistNode));
	strcpy(newnode->name, name);
	strcpy(newnode->author, author);
	newnode->id = id;
	newnode->llink = head;
	newnode->rlink = head->rlink;
	head->rlink->llink = newnode;
	head->rlink = newnode;
}

DlistNode* dremove(char*name)
{

	DlistNode *removed = (DlistNode *)malloc(sizeof(DlistNode));
	if (removed == head)return;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}

DlistNode* search(char* name)//���ڰ� name�� ��带 �����鼭 strcmp�� �� �������� ������ return;
{

}

void display()
{
	DlistNode *temp;
	temp = head->rlink;
	while (temp != tail)
	{
		printf("%s %s %d\n", temp->name, temp->author, temp->id);
		temp = temp->rlink;
	}
}
 