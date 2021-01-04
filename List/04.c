#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



typedef struct Node//노드 정의

{

	int data;//데이터

	struct Node *next;//링크(다음 노드의 위치 정보)

	struct Node *prev;//링크(이전 노드의 위치 정보)

}Node;



void InitList(Node **phead, Node **ptail);//초기화

void AddData(Node **phead, Node **ptail, int data);//데이터 추가

void Remove(Node **phead, Node **ptail, Node *now);//노드 삭제

Node *Find(Node *seek, int data);//노드 검색

void ViewAll(Node *head);//전체 출력

void Clear(Node **head, Node **ptail);//해제



int main(void)

{

	Node *head, *tail;

	{//초기화 및 추가 테스트를 위한 블록

		InitList(&head, &tail);

		AddData(&head, &tail, 3); //3

		AddData(&head, &tail, 4); //3 4

		AddData(&head, &tail, 6); //3 4 6

		AddData(&head, &tail, 9); //3 4 6 9

		ViewAll(head);// 3 4 6 9 출력

	}



	{//검색과 삭제 테스트를 위한 블록

		Node *seek = Find(head, 4);

		if (seek)

		{

			printf("4를 보관한 노드를 찾았음\n");

			Remove(&head, &tail, seek); //3 6 9

			printf("4를 보관한 노드 제거 후\n");

			ViewAll(head);// 3 6 9 출력

		}

	}

	Clear(&head, &tail);//전체 해제

	printf("전체 해제 후\n");

	ViewAll(head);// 아무것도 출력하지 않음



	return 0;

}



void InitList(Node **phead, Node **ptail)

{

	*phead = *ptail = NULL;

}

void AddData(Node **phead, Node **ptail, int data)

{

	Node *now = (Node *)malloc(sizeof(Node));//새로운 노드 생성

	now->data = data; //생성한 노드에 data 설정

	now->next = NULL;//생성한 노드의 next를 NULL로 설정



	if (*phead == NULL)//빈 생태일 때

	{

		*phead = *ptail = now;//맨 앞 노드와 맨 뒤 노드를 now로 설정

		return;

	}



	now->prev = (*ptail);//새로 생성한 노드의 prev를 (*ptail)로 설정    

	(*ptail)->next = now;//마지막 노드의 next를 now로 설정

	(*ptail) = now;//마지막 노드를 now로 설정

}



void Remove(Node **phead, Node **ptail, Node *now)

{

	if (now->prev)//now의 이전 노드가 있다면

	{

		now->prev->next = now->next;//이전 노드의 next를 now의 다음 노드로 설정

	}

	else//now의 이전 노드가 없다면(now는 맨 앞 노드)

	{

		*phead = now->next;//맨 앞 노드를 now의 다음 노드로 설정

	}

	if (now->next)//now의 다음 노드가 있다면

	{

		now->next->prev = now->prev;//다음 노드의 prev를 now의 이전 노드로 설정

	}

	else//now의 다음 노드가 없다면(now는 맨 뒤 노드)

	{

		*ptail = now->prev;//맨 뒤 노드를 now의 이전 노드로 설정

	}

	free(now);//노드 소멸

}



Node *Find(Node *seek, int data)

{

	while (seek) //seek가 참이면(NULL 이 아니면)

	{

		if (seek->data == data)//찾았을 때

		{

			return seek;

		}

		seek = seek->next;//seek를 다음으로 이동

	}

	return NULL;//못 찾았을 때

}

void ViewAll(Node *head)

{

	Node *seek = head;

	int i = 0;

	if (head == NULL)

	{

		printf("빈 상태임\n");

		return;

	}

	while (seek) //seek가 참이면(NULL 이 아니면)

	{

		i++;

		printf("[%2d]:%-05d ", i, seek->data);



		if (i % 5 == 0)//5의 배수일 때

		{

			printf("\n");//개행

		}

		seek = seek->next;//seek를 다음으로 이동

	}

	printf("\n");

}



void Clear(Node **head, Node **ptail)

{

	Node *prev = NULL;

	Node *seek = *head;

	while (seek) //seek가 참이면(NULL 이 아니면)

	{

		prev = seek;//seek를 변경하기 전에 prev에 기억

		seek = seek->next;//seek를 다음으로 이동

		free(prev);//이전 노드 메모리 해제

	}

	*head = *ptail = NULL;//이제 맨 앞 노드와 맨 뒤 노드가 없음

}
