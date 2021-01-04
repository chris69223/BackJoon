#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t));

typedef struct DlistNode {
	char name[30];
	char author[30];
	int id;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

int cnt = 0;
DlistNode *head, *tail;

void init();//���Ḯ��Ʈ �ʱ�ȭ �Լ� 
void dinsert();//�� ��带 head�� �����ʿ� ����
void dremove();//�����Լ�
void search();//Ž�� �Լ�
void display();// ��� �Լ�
int menu();
void bubblesort();//��������

int main()
{
	DlistNode phone[500];
	int num = 0;
	char name[30] = "NULL";
	char author[30] = "NULL";
	int id;
	init();//�ʱ�ȭ
	while (1)
	{
		
		num=menu();
		switch (num)
		{
	
		case 1://���� ���� �߰�(�Է�)
			
			printf("å �̸��� �Է��ϼ��� : ");
			scanf("%[^\n]s", name);
			getchar();
			printf("���� �̸��� �Է��ϼ��� :");
			scanf("%[^\n]s", author);
			getchar();
			printf("å ��ȣ�� �Է��ϼ��� :");
			scanf("%d", &id);
			dinsert(name, author, id);
			break;
		case 2:
			printf("������ å �̸��� �Է��ϼ���:");
			gets(name);
			dremove(name);
			break;
		case 3:
			//search();
			printf("ã�� ���� �̸��� �Է��ϼ��� :");
			gets(name);
			search(name);
			break;
		case 4:
			printf("-----���� ���-----\n");
			display();
			printf("\n\n");
			break;
		case 5:
			bubblesort(phone, cnt);
			printf("id������ �����Ͽ����ϴ�.\n");
			break;
		case 0:
			return 0;
		default :
				printf("�߸��Է��Ͽ����ϴ�\n");
				break;
		}
		

	}
	
}

void bubblesort(DlistNode *list[], int n)
{
	 
	int i, j, temp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (list[j]->id > list[j + 1]->id)
				SWAP(list[j]->id, list[j + 1]->id, temp);
	}
}


int menu()
{
	int num;
	printf("---------------MENU---------------\n");
	printf("1.���� ������ �߰��ϼ���: \n");
	printf("2.���� ������ �����ϼ���:\n");
	printf("3.ã�� ������ �Է��ϼ���:\n");
	printf("4.���� ��� ��ü ��� \n");
	printf("5.������ id���� �����Ͻÿ�\n");
	printf("0.����\n");
	printf("\n�޴� ��ȣ�� �Է��ϼ��� :");
	scanf("%d", &num);
	getchar();
	return num;
}

void init()//�ʱ�ȭ �Լ�
{
	head = (DlistNode *)malloc(sizeof(DlistNode));
	tail = (DlistNode *)malloc(sizeof(DlistNode));
	head->rlink = tail;
	tail->llink = head;

}

void dinsert(char* name, char* author, int id)//���� �Լ�
{
	
	DlistNode *newnode = (DlistNode *)malloc(sizeof(DlistNode));
	strcpy(newnode->name, name);
	strcpy(newnode->author, author);
	newnode->id = id;
	newnode->llink = head;
	newnode->rlink = head->rlink;
	head->rlink->llink = newnode;
	head->rlink = newnode;
	cnt++;
}

void dremove(char*name)
{

	DlistNode *removed = NULL;
	DlistNode *temp = NULL;
	temp = head->rlink;
	while (temp != tail)
	{
		if (strcmp(temp->name, name) == 0)
		{
			removed = temp;
			removed->llink->rlink = removed->rlink;
			removed->rlink->llink = removed->llink;
			free(removed);
			return;
		}
		temp = temp->rlink;
	}
	printf("%så�� �����Ǿ����ϴ�\n",name);
	cnt--;
}
	



void search(char* name)//���ڰ� name�� ��带 �����鼭 strcmp�� �� �������� ������ 0������
{
	DlistNode *temp;
	temp = head->rlink;
	while (temp != tail)
	{
		if (strcmp(name, temp->name) == 0)
		{
			printf("%s ã�ҽ��ϴ�\n", name);
			return;
		}
		else
			temp = temp->rlink;
	}
	printf("%s ã�����߽��ϴ�.\n", name);
}

void display()
{
	FILE* fp = fopen("infomake.txt", "w");//���� �б��� ������ =
	DlistNode *temp;
	temp = head->rlink;
	while(temp!=tail)
	{
		printf("%s %s %d\n", temp->name, temp->author, temp->id);
		fprintf(fp, "%s %s %d\n", temp->name, temp->author, temp->id);
		temp = temp->rlink;
	}
	fclose(fp);
}
