#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct QueueNode {
	int data;
	struct QueueNode *link;
}QueueNode;
QueueNode *q_front = NULL;
QueueNode *q_rear = NULL;

void empty();
void push(int data);
void pop();
void size();
void front();
void back();
int count = 0;

int main()
{
	int num;
	char ary[10];
	int data1 = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", ary);
		if (strcmp(ary, "push") == 0)
		{
			scanf("%d", &data1);
			push(data1);
			count++;
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
		else if (strcmp(ary, "front") == 0)
		{
			front();
		}
		else if (strcmp(ary, "back") == 0)
		{
			back();
		}
		else
		{
			printf("잘못된 입력입니다.\n");
			continue;
		}
	}
	return 0;
}


void empty()
{
	if (q_front == NULL)
		printf("1\n");
	else
		printf("0\n");

}

void push(int data)
{
	QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
	if (temp == NULL)
		printf("에러");
	else {
		temp->data = data;
		temp->link = NULL;
		if (q_front==NULL)
		{
			q_front = temp;
			q_rear = temp;
		}p-
		else {
			q_rear->link = temp;
			q_rear = temp;
		}
	}
}

void pop()
{
	QueueNode *temp = q_front;
	int data;
	if (q_front == NULL)
		printf("-1\n");
	else
	{
		data = temp->data;
		q_front = q_front->link;
		if (q_front == NULL)
			q_rear = NULL;
		free(temp);
		printf("%d\n", data);

	}
}

void size()
{
	if (count <= 0) {
		
		printf("0\m");
	}
	else {
		printf("%d\n", count);
	}
}

void front()
{
	if (q_front == NULL)
		printf("-1\n");
	else
		printf("%d\n", q_front->data);
}

void back()
{
	if (q_front == NULL)
		printf("-1\n");
	else
		printf("%d\n", q_rear->data);
}