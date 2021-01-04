#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

typedef struct pnode {//��� ����ü
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
	if (p == NULL)//����Ʈ�� ��尡 ���� ��� 
	{
		p = (NODE *)malloc(sizeof(NODE));
		if (p == NULL)
			exit(0);
		p->data = a;
		p->next = NULL;
	}
	else //����Ʈ�� ��尡 ���� ���
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
	NODE *q = NULL;		//p���� �ϳ� ���� ��ġ�� ��� 

		if (p->data == b) {		//ù��° ��尡 ã�� ����� ��� 
			p = p->next;//head�� ���� ���� 
			free(p);//���� ��带 ���� 
			return 1;//���� ���� 
		}
		while (p->data != b) {//ã�� ��尡 �ִ� ������ �̵� 
			if (p->next == NULL) 	//������ ã�� ��尡 ������ 
				return 0;//���� ���� 
			q = p;//�ٷ� ���� ����� ��ġ�� ��� 
			p = p->next;//p�� ���� ���� �̵���Ų�� 
		}
		q->next = q->next->next; 	//p���� �� ��° ���� ��� 
		free(p);//p ��带 ���� 
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
			q = min; /* �������� ��带 �ű� */
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