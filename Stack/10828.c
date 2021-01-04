#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct StackNode
{
	int data;
	struct StackNode *link;
}StackNode;

StackNode *s_top = NULL;


void empty();//���� ���� ���� �Լ� ���1 �ƴ� 0
void push(int data); //�� ���� ��ҿ� data �����Լ�
void size();//���ÿ� ����ִ� ������ ���� ���
void pop();//�� �� ��� ���� �Լ� �� ��� ��� �ƴϸ� -1
void top();//���� ���� ���0
int count = 0;

int main()
{
	int num;
	char ary[20];
	int data1=0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", ary);
		if (strcmp(ary, "push") == 0)
		{
			scanf("%d", &data1);
			push(data1);
		}
		else if (strcmp(ary, "pop") == 0)
		{
			pop();
		}
		else if (strcmp(ary, "empty") == 0)
		{
			empty();
		}
		else if (strcmp(ary, "size") == 0)
		{
			size();
		}
		else if (strcmp(ary, "top") == 0)
		{
			top();
		}
	}
	return 0;
}

void empty()
{
	if (s_top == NULL)
		printf("1\n");
	else
		printf("0\n");
}

void push(int data)
{
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));//��� ����
	if (temp == NULL)
	{
		fprintf(stderr, "�޸� �Ҵ� ����\n");
		return;
	}
	else {
		temp->data = data;
		temp->link = s_top;
		s_top = temp;
		count++;
	}

}void pop()
{
	StackNode *temp = s_top;
	if (s_top == NULL)
	{
		printf("-1\n");
	}
	else {
		printf("%d\n", temp->data);
		s_top = s_top->link;
		free(temp);
		count--;
		
	}
}



void top()
{
	if (s_top == NULL)
	{
		printf("-1\n");
	}
	else {
		printf("%d\n", s_top->data);
		
	}
}

void size()
{
	printf("%d\n", count);
}