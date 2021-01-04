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
int count = 0;

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		push(i);
		//count++;
	}
	while (count != 1) {
		pop();
		push(q_front->data);
		pop();
		//count--;
	}
	printf("%d \n", q_front->data);


	return 0;
}


void push(int data)
{
	QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
	if (temp == NULL) {
		printf("에러");
		return 0;
	}
	else {
		temp->data = data;
		temp->link = NULL;
		if (q_front == NULL)
		{
			q_front = temp;
			q_rear = temp;
		}
		else {
			q_rear->link = temp;
			q_rear = temp;
		}

	}
	count++;
}

void pop()
{
	QueueNode *temp = q_front;
	int data;
	if (q_front == NULL) {
		printf("에러\n");
		return 0;
	}
	else
	{
		data = temp->data;
		q_front = q_front->link;
		if (q_front == NULL)
			q_rear = NULL;
		free(temp);

	}
	count--;
}
