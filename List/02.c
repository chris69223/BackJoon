#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct {
	char name[30];
	char author[30];
	int id;

}Book;
typedef struct listNode {
	int data;
	struct listNode* next;
	struct listNode* prev;
}Node;

int menu();

int main()
{
	FILE* fp = fopen("info.txt", "r");
	int num;
	Book book;
	while (!feof(fp))
	{
		fscanf(fp, "%s %s %d", book.name, book.author, &book.id);
		menu();
		switch (num)
		{
		case 1 :
			//insert();
			printf("1");
			break;
		case 2: 
			//delete();
			printf("2");
			break;
		case 3:
			//search();
			printf("3");
			break;
		case 4:
			//printlist();
			fprintf(stdout,"%s %s %d", book.name, book.author, book.id);
			break;
		case 0:
			return 0;
		}

	}

}
int menu()
{
	printf("---------------MENU---------------");
	printf("1.도서 정보를 추가하세요: \n");
	printf("2.도서 정보를 삭제하세요:\n");
	printf("3.찾을 도서를 입력하세요:\n");
	printf("4.도서 목록 전체 출력");
	printf("0.종료");
	return 0;
}
/*
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	//변수 초기화 
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

void deleteNode(Node* Node)
{
	free(Node);
}

Node* getNode(Node* head, int index)
{
	Node* temp = head;
	int count = 0;
	while (temp != NULL)
	{
		if (count++ == index)
		{
			return temp;
		}
		temp = temp->next;

	}
	return NULL;

	
}

int countNode(Node* head)
{
	int count = -0;
	Node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

void addNode(Node** head, Node* newNode) 
{	
	

}*/