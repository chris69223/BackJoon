#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



typedef struct Node//��� ����

{

	int data;//������

	struct Node *next;//��ũ(���� ����� ��ġ ����)

	struct Node *prev;//��ũ(���� ����� ��ġ ����)

}Node;



void InitList(Node **phead, Node **ptail);//�ʱ�ȭ

void AddData(Node **phead, Node **ptail, int data);//������ �߰�

void Remove(Node **phead, Node **ptail, Node *now);//��� ����

Node *Find(Node *seek, int data);//��� �˻�

void ViewAll(Node *head);//��ü ���

void Clear(Node **head, Node **ptail);//����



int main(void)

{

	Node *head, *tail;

	{//�ʱ�ȭ �� �߰� �׽�Ʈ�� ���� ���

		InitList(&head, &tail);

		AddData(&head, &tail, 3); //3

		AddData(&head, &tail, 4); //3 4

		AddData(&head, &tail, 6); //3 4 6

		AddData(&head, &tail, 9); //3 4 6 9

		ViewAll(head);// 3 4 6 9 ���

	}



	{//�˻��� ���� �׽�Ʈ�� ���� ���

		Node *seek = Find(head, 4);

		if (seek)

		{

			printf("4�� ������ ��带 ã����\n");

			Remove(&head, &tail, seek); //3 6 9

			printf("4�� ������ ��� ���� ��\n");

			ViewAll(head);// 3 6 9 ���

		}

	}

	Clear(&head, &tail);//��ü ����

	printf("��ü ���� ��\n");

	ViewAll(head);// �ƹ��͵� ������� ����



	return 0;

}



void InitList(Node **phead, Node **ptail)

{

	*phead = *ptail = NULL;

}

void AddData(Node **phead, Node **ptail, int data)

{

	Node *now = (Node *)malloc(sizeof(Node));//���ο� ��� ����

	now->data = data; //������ ��忡 data ����

	now->next = NULL;//������ ����� next�� NULL�� ����



	if (*phead == NULL)//�� ������ ��

	{

		*phead = *ptail = now;//�� �� ���� �� �� ��带 now�� ����

		return;

	}



	now->prev = (*ptail);//���� ������ ����� prev�� (*ptail)�� ����    

	(*ptail)->next = now;//������ ����� next�� now�� ����

	(*ptail) = now;//������ ��带 now�� ����

}



void Remove(Node **phead, Node **ptail, Node *now)

{

	if (now->prev)//now�� ���� ��尡 �ִٸ�

	{

		now->prev->next = now->next;//���� ����� next�� now�� ���� ���� ����

	}

	else//now�� ���� ��尡 ���ٸ�(now�� �� �� ���)

	{

		*phead = now->next;//�� �� ��带 now�� ���� ���� ����

	}

	if (now->next)//now�� ���� ��尡 �ִٸ�

	{

		now->next->prev = now->prev;//���� ����� prev�� now�� ���� ���� ����

	}

	else//now�� ���� ��尡 ���ٸ�(now�� �� �� ���)

	{

		*ptail = now->prev;//�� �� ��带 now�� ���� ���� ����

	}

	free(now);//��� �Ҹ�

}



Node *Find(Node *seek, int data)

{

	while (seek) //seek�� ���̸�(NULL �� �ƴϸ�)

	{

		if (seek->data == data)//ã���� ��

		{

			return seek;

		}

		seek = seek->next;//seek�� �������� �̵�

	}

	return NULL;//�� ã���� ��

}

void ViewAll(Node *head)

{

	Node *seek = head;

	int i = 0;

	if (head == NULL)

	{

		printf("�� ������\n");

		return;

	}

	while (seek) //seek�� ���̸�(NULL �� �ƴϸ�)

	{

		i++;

		printf("[%2d]:%-05d ", i, seek->data);



		if (i % 5 == 0)//5�� ����� ��

		{

			printf("\n");//����

		}

		seek = seek->next;//seek�� �������� �̵�

	}

	printf("\n");

}



void Clear(Node **head, Node **ptail)

{

	Node *prev = NULL;

	Node *seek = *head;

	while (seek) //seek�� ���̸�(NULL �� �ƴϸ�)

	{

		prev = seek;//seek�� �����ϱ� ���� prev�� ���

		seek = seek->next;//seek�� �������� �̵�

		free(prev);//���� ��� �޸� ����

	}

	*head = *ptail = NULL;//���� �� �� ���� �� �� ��尡 ����

}
