#include <stdio.h>
#include <stdlib.h>

void swap(); //a,b스왑 함수 
int Partition();//실질적인 정렬 알고리즘
void QuickSort();

typedef struct array {
	int x;
	int y;
}array;

int main()
{
	int n, i,j;
	array p[100000];
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d",&p[i].x ,&p[i].y);	
	}
	QuickSort(p, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d %d\n", p[i].x, p[i].y);
	return 0;

}

void swap(array arr[], int a, int anext)
{
	array temp;
	temp.x = 0; temp.y = 0;

	temp.x = arr[a].x;
	arr[a].x = arr[anext].x;
	arr[anext].x = temp.x;

	temp.y = arr[a].y;
	arr[a].y = arr[anext].y;
	arr[a].y = temp.y;
}

int Partition(array arr[], int left, int right)
{
	array pivot;
	pivot.x = arr[left].x;
	pivot.y = arr[left].y;
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while ((pivot.x >= arr[low].x) &&(pivot.y >=arr[low].y) &&low <= right)// 피벗이 low보다 크면 
		{
			low++;//low를 다음으로 이동
		}
		while ((pivot.x <= arr[high].x)&&(pivot.y <=arr[high].y) && high >= (left + 1))
		{
			high--;
		}
		if (low <= high)
		{
			swap(arr, low, high);
		}
	}
	swap(arr, left, high);
	return high;
}

void QuickSort(array arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}