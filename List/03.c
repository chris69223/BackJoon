#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t));

typedef struct DlistNode {
	char name[30];
	char author[30];
	int id;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

int cnt = 0;
DlistNode *head, *tail;

void init();//연결리스트 초기화 함수 
void dinsert();//뉴 노드를 head의 오른쪽에 삽입
void dremove();//삭제함수
void search();//탐색 함수
void display();// 출력 함수
int menu();
void bubblesort();//버블정렬

int main()
{
	DlistNode phone[500];
	int num = 0;
	char name[30] = "NULL";
	char author[30] = "NULL";
	int id;
	init();//초기화
	while (1)
	{
		
		num=menu();
		switch (num)
		{
	
		case 1://도서 정보 추가(입력)
			
			printf("책 이름을 입력하세요 : ");
			scanf("%[^\n]s", name);
			getchar();
			printf("저자 이름을 입력하세요 :");
			scanf("%[^\n]s", author);
			getchar();
			printf("책 번호를 입력하세요 :");
			scanf("%d", &id);
			dinsert(name, author, id);
			break;
		case 2:
			printf("삭제할 책 이름을 입력하세요:");
			gets(name);
			dremove(name);
			break;
		case 3:
			//search();
			printf("찾을 도서 이름을 입력하세요 :");
			gets(name);
			search(name);
			break;
		case 4:
			printf("-----도서 목록-----\n");
			display();
			printf("\n\n");
			break;
		case 5:
			bubblesort(phone, cnt);
			printf("id순으로 정렬하였습니다.\n");
			break;
		case 0:
			return 0;
		default :
				printf("잘못입력하였습니다\n");
				break;
		}
		

	}
	
}

void bubblesort(DlistNode *list[], int n)
{
	 
	int i, j, temp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (list[j]->id > list[j + 1]->id)
				SWAP(list[j]->id, list[j + 1]->id, temp);
	}
}


int menu()
{
	int num;
	printf("---------------MENU---------------\n");
	printf("1.도서 정보를 추가하세요: \n");
	printf("2.도서 정보를 삭제하세요:\n");
	printf("3.찾을 도서를 입력하세요:\n");
	printf("4.도서 목록 전체 출력 \n");
	printf("5.도서를 id별로 정렬하시오\n");
	printf("0.종료\n");
	printf("\n메뉴 번호를 입력하세요 :");
	scanf("%d", &num);
	getchar();
	return num;
}

void init()//초기화 함수
{
	head = (DlistNode *)malloc(sizeof(DlistNode));
	tail = (DlistNode *)malloc(sizeof(DlistNode));
	head->rlink = tail;
	tail->llink = head;

}

void dinsert(char* name, char* author, int id)//삽입 함수
{
	
	DlistNode *newnode = (DlistNode *)malloc(sizeof(DlistNode));
	strcpy(newnode->name, name);
	strcpy(newnode->author, author);
	newnode->id = id;
	newnode->llink = head;
	newnode->rlink = head->rlink;
	head->rlink->llink = newnode;
	head->rlink = newnode;
	cnt++;
}

void dremove(char*name)
{

	DlistNode *removed = NULL;
	DlistNode *temp = NULL;
	temp = head->rlink;
	while (temp != tail)
	{
		if (strcmp(temp->name, name) == 0)
		{
			removed = temp;
			removed->llink->rlink = removed->rlink;
			removed->rlink->llink = removed->llink;
			free(removed);
			return;
		}
		temp = temp->rlink;
	}
	printf("%s책은 삭제되었습니다\n",name);
	cnt--;
}
	



void search(char* name)//인자값 name과 노드를 읽으면서 strcmp로 비교 같은값이 있으면 0값리턴
{
	DlistNode *temp;
	temp = head->rlink;
	while (temp != tail)
	{
		if (strcmp(name, temp->name) == 0)
		{
			printf("%s 찾았습니다\n", name);
			return;
		}
		else
			temp = temp->rlink;
	}
	printf("%s 찾지못했습니다.\n", name);
}

void display()
{
	FILE* fp = fopen("infomake.txt", "w");//파일 읽기모드 ㅎ마수 =
	DlistNode *temp;
	temp = head->rlink;
	while(temp!=tail)
	{
		printf("%s %s %d\n", temp->name, temp->author, temp->id);
		fprintf(fp, "%s %s %d\n", temp->name, temp->author, temp->id);
		temp = temp->rlink;
	}
	fclose(fp);
}
