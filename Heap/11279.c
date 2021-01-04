//최대히프 코드
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
허상윤꼬멘트 - int형 변수를 입력받을때에는 getchar처리를 해줄
필요가 없으니 참고하면 좋겠다.


진성민꼬멘트 - 나는 삭제할 때 swap함수를 써서 코드를 좀 더 효율적으로
하려 따로 처리했는데 막상 영상씨 코드를 보니 오히려 swap함수를 만든
것이 쉽고 코드 길이가 더 짧은 것 같아 좋은 것 같습니다
*/