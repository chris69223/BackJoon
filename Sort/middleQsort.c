#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b); //a,b스왑 함수 
void QuickSort(int* arr, int start, int end);
//int arr[1000000];
//int * arr = (int*)malloc(sizeof(int)*n);
int main()
{
	int n, i;
	scanf("%d", &n);
	int * arr = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	QuickSort(arr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;

}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b=temp;
}

void QuickSort(int* arr, int start, int end)
{
	if (start >= end)return;
	int mid = (start + end) / 2;
	int pivot = arr[mid];
	swap(&arr[start], &arr[mid]);

	int low = start + 1, high = end;
	
	while (1)
	{
		while (arr[low] <= pivot) { low++; }
		while (arr[high] > pivot) { high--;}
		if (low > high)break;
		swap(&arr[low], &arr[high]);
	}
	swap(&arr[start], &arr[high]);
	QuickSort(arr, start, high - 1);
	QuickSort(arr, high + 1, end);
}