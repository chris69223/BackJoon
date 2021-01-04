/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "strawberry";
	char* p1 = NULL;
	p1 = strstr(str , "berry");
	printf("%s\n", p1);

}*/

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