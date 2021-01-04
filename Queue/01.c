#include <stdio.h>
#include <malloc.h>

typedef int element;
typedef struct QueueNode {
	element data;
	struct QueueNode *link;
}QueueNode;
QueueNode *front = NULL;
QueueNode *rear = NULL;

void error(char* message);
int empty();
void enqueue();
void dequeue();

int main()
{
	
}

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

int empty()
{
	return(front==NULL);
}

void enqueue(element data)
{
	QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
	if (temp == NULL)
		error("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	else {
		temp->data = data;
		temp->link = NULL;
		if (empty())
		{
			front = temp;
			rear = temp;
		}
		else {
			rear->link = temp;
			rear=temp;
		}
	}
}

void dequeue()
{
	QueueNode *temp = front;
	element data;
	if (empty())
		error("ť�� ������ϴ�.");
	else
	{
		data = temp->data;
		front = front->link;
		if (front == NULL)
			rear = NULL;
		free(temp);
		
	}
}