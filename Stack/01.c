#include <stdio.h>
#include <stdlib.h>

typedef int element;//���� int������ char���� �ٲ�� �̰� ���Ǹ� �ٲ��ָ� �ȴ�.
typedef struct StackNode
{
	element data;
	struct StackNode *link;
}StackNode;

typedef struct {
	StackNode *top;//���� �ֱٿ� ������ ��ġ ����
}linkstack;

void init(linkstack* s);//�ʱ�ȭ �Լ� 
int empty(linkstack* s);//���� ���� ���� �Լ�
void push(linkstack* s, element data); //�� ���� ��ҿ� item �����Լ�
int size()//���ÿ� ����ִ� ������ ���� ���
element pop(linkstack* s);//�� �� ��� ���� �Լ�
element peek(linkstack* s);//������ ��Ҹ� ����x ��ȯ

int main()
{
	linkstack* s;
	init(s);

	return 0;
}

void init(linkstack* s)
{
	s->top = NULL;
}

int empty(linkstack* s)
{
	return(s->top == NULL);
}

void push(linkstack* s, int data)
{
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));//��� ����
	if (temp == NULL)
	{
		fprintf(stderr, "�޸� �Ҵ� ����");
		return;
	}
	else {
		temp->data = data;
		temp->link = s->top;
		s->top = temp;
	}
	
}
