#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int arr[], int a, int b); //a,b���� �Լ� 
int Partition();//�������� ���� �˰���
void QuickSort();//
//int arr[1000000];
int main()
{
	int n, i;
	clock_t start, end;
	scanf("%d", &n);
	int * arr = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	QuickSort(arr, 0, n-1);
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;

}

void swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int Partition(int arr[], int left, int right)
{
	int pivot = arr[left];//�Ǻ��� ��ġ�� ���� ���ʿ��� ���� 
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (pivot >= arr[low] && low <= right)// �ǹ��� low���� ũ�� 
		{
			low++;//low�� �������� �̵�
		}
		while (pivot <= arr[high] && high >= (left + 1))
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

void QuickSort(int arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}