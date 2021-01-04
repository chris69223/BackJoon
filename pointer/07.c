#include <stdio.h>

void printAry(int *a, int b);

int main()
{
	int ary[5] = {1,2,3,4,5,};
	int* p1 = NULL;
	p1 = ary;
	printAry(p1, 5);
	return 0;


}

void printAry(int *a, int b)
{
	for (int i = 0; i < b; i++)
		printf("%d, ", *(a+i));
	printf("\n");
}

/* 새롭게 푼 7번 
#include <stdio.h>

void printAry(int* arr, int a);

int main()
{
	int ary[20] = { 1,2,3,4,5, 6, 7, 8, 9 };

	printAry(ary, sizeof(ary)/sizeof(ary[0]));
	return 0;
}

void printAry(int*arr, int a)
{
	for (int i = 0; i < a; i++)
		printf("배열의 요소: %d", arr[i]);
	printf("\n");
}
*/