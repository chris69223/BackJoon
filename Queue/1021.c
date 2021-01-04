#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int element;           // 요소의 타입
typedef struct DlistNode {  // 노드의 타입
	element data;
	struct DlistNode *llink;     //  왼쪽 링크
	struct DlistNode *rlink;     //  오른쪽 링크
} DlistNode;

typedef struct DequeType{  // 덱의 타입

  DlistNode *head;             // 덱의 처음
  DlistNode *tail;                // 덱의 끝
} DequeType;




void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// 덱의 초기화
void init(DequeType *dq)
{
	dq->head = dq->tail = NULL;  // 덱의 처음과 끝을 NULL로 세팅

}




// 노드 생성
DlistNode *create_node(DlistNode *llink, element item, DlistNode *rlink)
{
	DlistNode *node = (DlistNode *)malloc(sizeof(DlistNode));  // 노드 생성하면서 동적 메모리 할당
	if (node == NULL) error("메모리 할당 오류");
	node->llink = llink;            // 왼쪽 링크, 오른쪽 링크와 데이터를 직접 생성
	node->data = item;
	node->rlink = rlink;
	return node;
}




int is_empty(DequeType *dq)
{
	if (dq->head == NULL) return TRUE;
	else return FALSE;
}
// rear에 아이템 추가 연산

void add_rear(DequeType *dq, element item)
{
	DlistNode *new_node = create_node(dq->tail, item, NULL);  // 맨 끝에 아이템을 추가하기 때문에 오른쪽 링크는 NULL
	if (is_empty(dq))                 // 덱이 비었으면 맨 앞에 노드 추가
		dq->head = new_node;
	else {
		dq->tail->rlink = new_node;   // 그게 아니라면 맨 끝 노드의 오른쪽 링크에 노드 추가
		dq->tail = new_node;            //  그리고 새롭게 추가된 노드가 맨 끝 노드가 됨

	}
}

// front에 아이템 추가 연산
void add_front(DequeType *dq, element item)
{
	DlistNode *new_node = create_node(NULL, item, dq->head);  //  맨 앞에 노드를 추가하기 때문에 왼쪽 링크는 NULL
	if (is_empty(dq))                   // 덱이 비었으면
		dq->tail = new_node;         // 맨 끝에 새로운 노드 추가
	else {

		dq->head->llink = new_node;   // 그게 아니라면 맨 앞 노드의 왼쪽 링크에 새로운 노드를 추가
		dq->head = new_node;            //  맨 앞에 새로운 노드 추가
	}
}

// front의 아이템 삭제 연산
element delete_front(DequeType *dq)
{
	element item;                      // 지울 아이템의 빈공간 생성
	DlistNode *removed_node;    // 지울 노드의 빈공간 생성

	if (is_empty(dq)) error("공백 덱에서 삭제");

	else {

		removed_node = dq->head;       // 빈 노드 공간에 덱의 맨 앞 노드 넣기 (front의 삭제라서)
		item = removed_node->data;     // 빈 아이템 공간에 덱의 맨 앞 노드(복사본) 삭제할 데이터 넣기
		dq->head = dq->head->rlink;    // 덱의 첫 부분은 오른쪽 링크(두 번째)에 있었던 데이터로 변경
		free(removed_node);                 // 메모리 공간 반납
		if (dq->head == NULL)
			dq->tail = NULL;                   // 공백일 경우 덱의 맨 끝은 NULL
		else
			dq->head->llink = NULL;        // 그게 아니라면 덱의 맨 처음의 왼쪽 링크는 NULL
	}
	return item;                                //  추출한 데이터 리턴
}

element delete_rear(DequeType *dq)
{

	element item;                            // 지울 아이템의 빈공간 생성
	DlistNode *removed_node;         // 지울 노드의 빈공간 생성
	if (is_empty(dq)) error("공백 덱에서의 삭제");
	else {
		removed_node = dq->tail;        // 빈 노드 공간에 덱의 맨 끝 노드 넣기 (rear의 삭제)
		item = removed_node->data;   // 빈 아이템 공간에 덱의 맨 끝 노드(복사본) 삭제할 데이터 넣기
		dq->tail = dq->tail->llink;        // 덱의 맨 끝은 왼쪽 링크(맨 마지막 -1)에 있었던 데이터로 변경
		free(removed_node);              // 메모리 공간 반납
		if (dq->tail == NULL)
			dq->head = NULL;                // 공백일 경우 덱의 맨 처음은 NULL
		else
			dq->tail->rlink = NULL;          // 그게 아니라면 덱의 맨 끝의 오른쪽 링크는 NULL
	}
	return item;                               // 추출한 데이터 리턴
}

void display(DequeType *dq)
{
	DlistNode *p;
	printf("(");
	for (p = dq->head; p != NULL; p = p->rlink)    // 덱의 첫 노드부터 맨 끝까지 데이터 출력
		printf("%d ", p->data);
	printf(")\n");

}
void main()
{
	DequeType dq;
	int num, num2;
	scanf("%d %d", &num, &num2);
	
}
