#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

typedef struct pnode {//노드 구조체
	int data;
	struct pnode *next;
}NODE;

NODE *insert(NODE *, int);
NODE *sortlist(NODE *);
NODE *delete(NODE *, int);
void printList(NODE *);
NODE *search(NODE *, int);

int main() 
{
	int n = 5;
	int num;
	NODE *head = NULL;

	while (n-- > 0) {
		printf("Enter a data : ");
		scanf("%d", &num);
		head = insert(head, num);
	}
	//("delete a data : ");
	
	//delete(head, 3);
	printf("\nlinked list : ");
	printList(head);
	printf("search");
	search(head, 3);

	//head = sortlist(head);
	//printf("\nsorted list : ");
	//printList(head);
}

NODE *insert(NODE *p, int a)
{
	NODE *temp;
	if (p == NULL)//리스트에 노드가 없을 경우 
	{
		p = (NODE *)malloc(sizeof(NODE));
		if (p == NULL)
			exit(0);
		p->data = a;
		p->next = NULL;
	}
	else //리스트에 노드가 있을 경우
	{
		temp = p;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = (NODE *)malloc(sizeof(NODE));
		if (temp->next == NULL)
			exit(0);
		temp = temp->next;
		temp->data = a;
		temp->next = NULL;
	
	}
	return(p);
}

NODE *delete(NODE* p, int b){
	NODE *q = NULL;		//p보다 하나 전에 위치한 노드 

		if (p->data == b) {		//첫번째 노드가 찾는 노드인 경우 
			p = p->next;//head를 다음 노드로 
			free(p);//시작 노드를 제거 
			return 1;//삭제 성공 
		}
		while (p->data != b) {//찾는 노드가 있는 곳까지 이동 
			if (p->next == NULL) 	//끝까지 찾는 노드가 없으면 
				return 0;//삭제 실패 
			q = p;//바로 뒤의 노드의 위치를 기억 
			p = p->next;//p를 다음 노드로 이동시킨다 
		}
		q->next = q->next->next; 	//p보다 두 번째 뒤의 노드 
		free(p);//p 노드를 제거 
		return 1;
	}
	
NODE *sortlist(NODE *p)
{
	NODE *temp1, *temp2, *min, *prev, *q;

	q = NULL;
	while (p != NULL) {
		prev = NULL;
		min = temp1 = p;
		temp2 = p->next;
		while (temp2 != NULL) {
			if (min->data > temp2->data) {
				min = temp2;
				prev = temp1;
			}
			temp1 = temp2;
			temp2 = temp2->next;
		}
		if (prev == NULL)
			p = min->next;
		else
			prev->next = min->next;
		min->next = NULL;

		if (q == NULL) {
			q = min; /* 최저값의 노드를 옮김 */
		}
		else {
			temp1 = q;
			while (temp1->next != NULL)
				temp1 = temp1->next;
			temp1->next = min;
		}

		return (q);
	}
}

void printList(NODE *p)
{
	while (p->next != NULL) {
		printf("%d->", p->data);
		p = p->next;
	}
	printf("%c.\n", p->data);
}

NODE *search(NODE *p, int a)
{
	NODE *temp=NULL;
	p = temp;
	while (p != NULL)
	{
		if (p->data == a)return p;
		p = p->next;
	}
	return p;

}