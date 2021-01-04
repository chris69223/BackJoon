//�ִ����� �ڵ�
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
typedef struct heapType {
	int heap[MAX];
	int heap_size;
}heapType;

heapType* creatHeap();
void Max_insertHeap(heapType* h,int item);
int deleteHeap(heapType* h);
void printHeap(heapType* h);

int main()
{
	heapType *h = creatHeap();
	int n, item, num;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		getchar();
		if (num == 0)
		{
			if (h->heap_size == 0)
				printf("0\n");
			else {
				item = deleteHeap(h);
				printf("%d\n", item);
			}
		}
		else
		{
			Max_insertHeap(h,num) ;
		}
	}
	return 0; 
}

heapType* creatHeap()
{
	heapType* h = (heapType*)malloc(sizeof(heapType));
	h->heap_size = 0;;
	return h;
}

void Max_insertHeap(heapType* h, int item)
{
	int i;
	h->heap_size = h->heap_size + 1;
	i = h->heap_size;
	while ((i != 1) && (item > h->heap[i / 2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}

	h->heap[i] = item;
}

int deleteHeap(heapType* h)
{
	int parent, child;
	int item, temp;
	item = h->heap[1];
	temp = h->heap[h->heap_size];
	h->heap_size = h->heap_size - 1;
	parent = 1;
	child = 2;
		while (child <= h->heap_size)
		{
			if ((child < h->heap_size) && (h->heap[child] < h->heap[child + 1]))
				child++;
			if (temp >= h->heap[child]) break;
			else {
				h->heap[parent] = h->heap[child];
				parent = child;
				child = child * 2;
			}
		}
		h->heap[parent] = temp;
		return item;
	
}

void printHeap(heapType* h)
{
	for (int i = 1; i <= h->heap_size; i++)
		printf("%d", h->heap[i]);
}

/*
���������Ʈ - int�� ������ �Է¹��������� getcharó���� ����
�ʿ䰡 ������ �����ϸ� ���ڴ�.


�����β���Ʈ - ���� ������ �� swap�Լ��� �Ἥ �ڵ带 �� �� ȿ��������
�Ϸ� ���� ó���ߴµ� ���� ���� �ڵ带 ���� ������ swap�Լ��� ����
���� ���� �ڵ� ���̰� �� ª�� �� ���� ���� �� �����ϴ�
*/