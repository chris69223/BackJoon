#include <stdio.h>
#include <stdlib.h>
int static compare(const void* first, const void* second);

int arr[100000][2];
int main()
{
	int n, i, j;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);

	}
	qsort(arr,n, sizeof(int)*2, compare);
	
		for(j=0;j<n;j++)
			printf("%d %d\n", arr[j][0], arr[j][1]);

		
	return 0;

}

//return 1�� ü���� //
// ������������ ������ �� ����ϴ� ���Լ�
int static compare(const void* first, const void* second)
{
	int* x = (int*) first;
	int* y = (int*) second;


	if (x[0] > y[0])
		return 1;
	else if (x[0] < y[0])
		return -1;
	else
	{
		if (x[1] > y[1])
			return 1;
		else
			return -1;
	}
}