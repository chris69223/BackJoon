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

void push(int data);
int pop();
int empty();


int main()
{
	int num;
	int data1=0;
	int sum = 0;
	int minus = 0;
	int rsum = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &data1);
		if (data1!=0)
		{
			push(data1);
			sum += data1;
		}
		else if(data1==0)
		{
			minus=pop();
			rsum += minus;
			
		}
	}
	printf("%d\n", sum-rsum);
}

void push(int data)
{
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
	if (temp == NULL)
	{
		printf("메모리 할당 에러");
		exit(1);
	}
	else
	{
		temp->data = data;
		temp->link = s_top;
		s_top = temp;
	}
}
int pop()
{
	StackNode *temp = s_top;
	if (s_top == NULL)
	{
		printf("스택이 비어있음\n");
		return 0;
	}
	else {
		int data = temp->data;
		s_top = s_top->link;
		free(temp);
		return data;
	}
}

