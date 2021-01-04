#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int element;           // ����� Ÿ��
typedef struct DlistNode {  // ����� Ÿ��
	element data;
	struct DlistNode *llink;     //  ���� ��ũ
	struct DlistNode *rlink;     //  ������ ��ũ
} DlistNode;

typedef struct DequeType{  // ���� Ÿ��

  DlistNode *head;             // ���� ó��
  DlistNode *tail;                // ���� ��
} DequeType;




void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// ���� �ʱ�ȭ
void init(DequeType *dq)
{
	dq->head = dq->tail = NULL;  // ���� ó���� ���� NULL�� ����

}




// ��� ����
DlistNode *create_node(DlistNode *llink, element item, DlistNode *rlink)
{
	DlistNode *node = (DlistNode *)malloc(sizeof(DlistNode));  // ��� �����ϸ鼭 ���� �޸� �Ҵ�
	if (node == NULL) error("�޸� �Ҵ� ����");
	node->llink = llink;            // ���� ��ũ, ������ ��ũ�� �����͸� ���� ����
	node->data = item;
	node->rlink = rlink;
	return node;
}




int is_empty(DequeType *dq)
{
	if (dq->head == NULL) return TRUE;
	else return FALSE;
}
// rear�� ������ �߰� ����

void add_rear(DequeType *dq, element item)
{
	DlistNode *new_node = create_node(dq->tail, item, NULL);  // �� ���� �������� �߰��ϱ� ������ ������ ��ũ�� NULL
	if (is_empty(dq))                 // ���� ������� �� �տ� ��� �߰�
		dq->head = new_node;
	else {
		dq->tail->rlink = new_node;   // �װ� �ƴ϶�� �� �� ����� ������ ��ũ�� ��� �߰�
		dq->tail = new_node;            //  �׸��� ���Ӱ� �߰��� ��尡 �� �� ��尡 ��

	}
}

// front�� ������ �߰� ����
void add_front(DequeType *dq, element item)
{
	DlistNode *new_node = create_node(NULL, item, dq->head);  //  �� �տ� ��带 �߰��ϱ� ������ ���� ��ũ�� NULL
	if (is_empty(dq))                   // ���� �������
		dq->tail = new_node;         // �� ���� ���ο� ��� �߰�
	else {

		dq->head->llink = new_node;   // �װ� �ƴ϶�� �� �� ����� ���� ��ũ�� ���ο� ��带 �߰�
		dq->head = new_node;            //  �� �տ� ���ο� ��� �߰�
	}
}

// front�� ������ ���� ����
element delete_front(DequeType *dq)
{
	element item;                      // ���� �������� ����� ����
	DlistNode *removed_node;    // ���� ����� ����� ����

	if (is_empty(dq)) error("���� ������ ����");

	else {

		removed_node = dq->head;       // �� ��� ������ ���� �� �� ��� �ֱ� (front�� ������)
		item = removed_node->data;     // �� ������ ������ ���� �� �� ���(���纻) ������ ������ �ֱ�
		dq->head = dq->head->rlink;    // ���� ù �κ��� ������ ��ũ(�� ��°)�� �־��� �����ͷ� ����
		free(removed_node);                 // �޸� ���� �ݳ�
		if (dq->head == NULL)
			dq->tail = NULL;                   // ������ ��� ���� �� ���� NULL
		else
			dq->head->llink = NULL;        // �װ� �ƴ϶�� ���� �� ó���� ���� ��ũ�� NULL
	}
	return item;                                //  ������ ������ ����
}

element delete_rear(DequeType *dq)
{

	element item;                            // ���� �������� ����� ����
	DlistNode *removed_node;         // ���� ����� ����� ����
	if (is_empty(dq)) error("���� �������� ����");
	else {
		removed_node = dq->tail;        // �� ��� ������ ���� �� �� ��� �ֱ� (rear�� ����)
		item = removed_node->data;   // �� ������ ������ ���� �� �� ���(���纻) ������ ������ �ֱ�
		dq->tail = dq->tail->llink;        // ���� �� ���� ���� ��ũ(�� ������ -1)�� �־��� �����ͷ� ����
		free(removed_node);              // �޸� ���� �ݳ�
		if (dq->tail == NULL)
			dq->head = NULL;                // ������ ��� ���� �� ó���� NULL
		else
			dq->tail->rlink = NULL;          // �װ� �ƴ϶�� ���� �� ���� ������ ��ũ�� NULL
	}
	return item;                               // ������ ������ ����
}

void display(DequeType *dq)
{
	DlistNode *p;
	printf("(");
	for (p = dq->head; p != NULL; p = p->rlink)    // ���� ù ������ �� ������ ������ ���
		printf("%d ", p->data);
	printf(")\n");

}
void main()
{
	DequeType dq;
	int num, num2;
	scanf("%d %d", &num, &num2);
	
}
