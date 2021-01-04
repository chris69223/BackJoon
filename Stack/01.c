#include <stdio.h>
#include <stdlib.h>

typedef int element;//형이 int형에서 char형을 바뀌면 이거 정의만 바꿔주면 된다.
typedef struct StackNode
{
	element data;
	struct StackNode *link;
}StackNode;

typedef struct {
	StackNode *top;//가장 최근에 보관한 위치 정보
}linkstack;

void init(linkstack* s);//초기화 함수 
int empty(linkstack* s);//공백 상태 검출 함수
void push(linkstack* s, element data); //맨 위에 요소에 item 삽입함수
int size()//스택에 들어있는 정수의 개수 출력
element pop(linkstack* s);//맨 위 요소 삭제 함수
element peek(linkstack* s);//맨위에 요소를 삭제x 반환

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
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));//노드 생성
	if (temp == NULL)
	{
		fprintf(stderr, "메모리 할당 에러");
		return;
	}
	else {
		temp->data = data;
		temp->link = s->top;
		s->top = temp;
	}
	
}
