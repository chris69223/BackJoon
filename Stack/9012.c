#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct StackNode {
	char data;
	struct StackNode *link;
}StackNode;
StackNode *top=NULL;

int checkVPS(char* s);
void push(char data);
void pop();
int count = 0;

int main()
{
	int num;
	char ps[50];
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", ps);
		if (checkVPS(ps)==1)//1�̸� ����
		{
			printf("YES\n");
		}
		else if(checkVPS(ps)==2)
		{
			printf("NO\n");
		}
	}
	return 0;
}


void push(char data)
{
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
	//strcpy(temp->data, data);
	if (temp == NULL)
	{
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	else
	{
		temp->data = data;
		temp->link = top;
		top = temp;
	}
}
void pop()
{
	StackNode *temp = top;
	if (top == NULL)
	{
		printf("������ �������\n");
		
	}
	else {
	
		top = top->link;
		free(temp);
		
	}
}
int checkVPS(char* s)
{
	char symbol, op;
	for (int i = 0; strlen(s); i++)
	{
		if (s[i] == '(') {
			push(s[i]);
			count++;
		}
		else if (s[i] == ')') {
			pop();
			count--;
		}
	}
	if (count == 0)
		return 1;
	else if (s[0] == ')')
		return 2;
	else
		return 2;
}