
#include <stdio.h>
#include <stdlib.h>
#define MAX 10000000
typedef struct heapType {
	int heap[MAX];
	int heap_size;
}heapType;

heapType* creatHeap();
void Min_insertHeap();
void Max_insertHeap();
void Max_deleteHeap(heapType* h);

int main()
{
	heapType *h = creatHeap();//max
	heapType *m = creatHeap();//min
	int n, num;
	int cnt = 0;
	scanf("%d", &n);
	getchar();
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		getchar();
		if (i % 2 == 1)
		{
			Max_insertHeap(h, num);
			
		}
		else {
			Min_insertHeap(m, num);
			
		}
		
		if ((h->heap[1] > m->heap[1]) && (cnt != 0))//
		{
			int a = h->heap[1];
			int b = m->heap[1];
			Max_deleteHeap(h);
			Min_deleteHeap(m);

			Max_insertHeap(h, b);
			Min_insertHeap(m, a);
		}
		printf("%d\n", h->heap[1]);
		cnt++;//cnt=1;
	}
	return 0;
}

heapType* creatHeap()
{
	heapType* h = (heapType*)malloc(sizeof(heapType));
	h->heap_size = 0;
	return h;
}

void Min_insertHeap(heapType* h, int item)
{
	int i;
	h->heap_size = h->heap_size + 1;
	i = h->heap_size;
	while ((i != 1) && (item < h->heap[i / 2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}

	h->heap[i] = item;
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

void Min_deleteHeap(heapType* h)
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
		if ((child < h->heap_size) && (h->heap[child] > h->heap[child + 1]))
			child++;
		if (temp <= h->heap[child]) break;
		else {
			h->heap[parent] = h->heap[child];
			parent = child;
			child = child * 2;
		}
	}
	h->heap[parent] = temp;

}

void Max_deleteHeap(heapType* h)
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

}

/*
���������Ʈ-
��� "������ ����"���� �����ϴ� ������ cnt�� �����ϸ�,
cnt ������ Ȱ�뵵�� ���� �� �ִٰ� �����Ѵ�.
�� �� �κ��� �� ������ �ڵ��̴�.

�����β���Ʈ- cnt�� ������ ó������ ���� ������ ������� ��
��ȯ�ϴ� ���� �����ϱ� ���� ������� �ϼ̴µ� �Լ� cnt�� 
�����Ǿ�ټ� cnt�� Ȱ�밡ġ�� �������� �Ͱ��� ���� 
�÷��׸� ����� ��ó�� cnt�� 1�� �����ϸ� �� ���� �� �����ϴ�.


*/