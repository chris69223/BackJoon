#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	scanf("%d", &n);
	long long p[91];
	p[0] = 0;
	p[1] = 1;
	for (int i = 2; i < n+2; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
		
	}
	printf("%lld\n", p[n]);
	return 0;
}