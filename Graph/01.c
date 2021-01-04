#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
#define MAX_VERTEX 10

typedef struct node {
	int v;
	struct node *next;
}Gnode;
/*----------vertext 방문여부 표시 배열-----------*/
int visited[MAX_VERTEX] = { 0 };
//if visited[i]==1,visited
//				0, otherwise

 Gnode* graph[MAX_VERTEX];
 int top = -1;
 int stack[MAX_VERTEX];
 
 void push(int v)
 {
	 if (top == MAX_VERTEX - 1)
	 {
		 printf("스택이 꽉 차버렸네유\n");
		 return;
	 }
	 top++;
	 stack[top] = v;
 }

 int pop()
 {
	 int temp;
	 if (top == -1)
	 {
		printf("stack is empty\n");
		return -1;
	 }
	 temp = stack[top];
	 top--;
	 return temp;
 }
 //return 1 if the stack is empty 
 //else 0
 int isStackEmpty()
 {
	 if (top == -1)
	 {
		 return 1;
	 }
	 else 
	 {
		 return 0;
	 }
 }

void addEdge(int v1, int v2)//, int doReverse)//o에서1 가는것도 넣지만1에서 0가는것도 넣는다 reverse
{
	Gnode* new_one = (Gnode*)malloc(sizeof(Gnode));
	Gnode* cur = graph[v1];

	new_one->v = v2;
	new_one->next = 0;

	if (cur == 0)//v1에 아무것도 붙어있지 않은 상태
	{
		graph[v1] = new_one;
		return;
	}
	else//v1에 이미 다른 vertex가 붙어있는 상태
	{
		while (cur->next != 0)
		{
			cur = cur->next;
		}
		cur->next = new_one;
		return;
	}
}

void showAdjacentVertex(int v)
{
	Gnode* cur = graph[v];
	while (cur != 0)
	{
		printf("%d \n", cur->v);
		cur = cur->next;
	}
}
//v와 연결된 vertex중 아직까지 방문하지 않은 vertex를 반환
//만약 조건만족 vertex가 없으면 -1반환
int findNextVertex(int v)
{
	Gnode* cur = graph[v];
	while (cur != 0)
	{
		if (visited[cur->v] == 0)
		{
			return cur->v;
		}
		cur = cur->next;
	}
	return -1;//v에 연결된 vertex 중에 방문하지 않은 것이 없다. 
}

void doDFS(int v)
{
	printf("%d \n", v);
	visited[v] = 1;
	push(v);
	while (isStackEmpty() == 0)
	{
		int next_vertex = -1;
		next_vertex = findNextVertex(stack[top]);

		if (next_vertex == -1)
		{
			pop();
		}
		else
		{
			printf("%d \n", next_vertex);
			visited[next_vertex] = 1;
			push(next_vertex);
		}
	}
}

void main()
{
	/*int n,i;
	scanf("%d %d %d", &n,);
	for (i = 0; i < n; i++)
	{ 
		scanf("%d %d")
		add(EDge)
	}*/
	
	addEdge(5,4);
	addEdge(5,2);
	addEdge(1,2);
	addEdge(3,4);
	addEdge(3,1);
	doDFS(3);
	//showAdjacentVertex(3);
}