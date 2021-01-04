#include <stdio.h>
#include <stdlib.h>

long long sum(int *a, int n) ;

int main()
{
	int ary = malloc(sizeof(int) * 1000000);
	int n; 
	scanf("%d", &n);
	sum(ary, n);
	return 0;
}

long long sum(int *a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	return sum;
}