#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct DlistNode {
	char name[30];//저자 이름
	char author[30];//
	int id;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

DlistNode *head;
DlistNode *tail;

void init();//연결리스트 초기화 함수 
void dinsert();//뉴 노드를 phead의 오른쪽에 삽입
void dremove();//삭제함수
void search();//탐색 함수
void display();// 출력 함수
int menu();

int main()
{
}


int menu()
{
	int num;
	printf("---------------MENU---------------\n");
	printf("1.도서 정보를 추가하세요: \n");
	printf("2.도서 정보를 삭제하세요:\n");
	printf("3.찾을 도서를 입력하세요:\n");
	printf("4.도서 목록 전체 출력 \n");
	printf("0.종료\n");
	printf("\n메뉴 번호를 입력하세요 :");
	scanf("%d", &num);
	return num;
}

void init()//초기화 함수
{
	head = (DlistNode *)malloc(sizeof(DlistNode));
	tail = (DlistNode *)malloc(sizeof(DlistNode));
	head->rlink = tail;
	//head->llink=NULL;
	//tail->rlink = NULL;
	tail->llink = head;

}

void dinsert(char*name, char*author, int id)//삽입 함수
{

	DlistNode *newnode = (DlistNode *)malloc(sizeof(DlistNode));
	strcpy(newnode->name, name);
	strcpy(newnode->author, author);
	newnode->id = id;
	newnode->llink = head;
	newnode->rlink = head->rlink;
	head->rlink->llink = newnode;
	head->rlink = newnode;
}

DlistNode* dremove(char*name)
{

	DlistNode *removed = (DlistNode *)malloc(sizeof(DlistNode));
	if (removed == head)return;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}

DlistNode* search(char* name)//인자값 name과 노드를 읽으면서 strcmp로 비교 같은값이 있으면 return;
{

}

void display()
{
	DlistNode *temp;
	temp = head->rlink;
	while (temp != tail)
	{
		printf("%s %s %d\n", temp->name, temp->author, temp->id);
		temp = temp->rlink;
	}
}
 