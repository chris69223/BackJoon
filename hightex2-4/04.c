#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputAry(int* a, int b);
int printAry(int* a, int b);

int main()
{
	int ary[3];
	int* p = NULL;
	p = ary;
	
	inputAry(ary, sizeof(ary)) / sizeof(ary[0]);
	printAry(ary, sizeof(ary)) / sizeof(ary[0]);

	return 0;

}


 int inputAry(int* a, int b)
{
	 for (int i = 0; i < 3; i++) 
	 {
		 printf("%d ��° ��Ҹ� �Է��ϼ��� : ", i);
		 scanf("%d", (a + i));
	 }
}

int printAry(int* a, int b)
{
	printf("�Է¹��� ��: %d %d %d ",*(a), *(a+1), *(a+2));
}