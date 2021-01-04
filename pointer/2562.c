#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0;
	int mini = 0;
	int arr[9];
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
		
	for (int i = 0; i < 9; i++)
		if (arr[i] > max)
			max = arr[i];
		else
			mini = arr[i];
	printf("%d\n", max);


}
6¹ø
#include <stdio.h>

int main()
{
	char str[100] = { "strawberry" };
	char p1 = NULL;
	p1 = str;

	for (int i = 5; i < 10; i++)
		printf("%c", *(str + i));
	printf("\n");
	return 0;
}
