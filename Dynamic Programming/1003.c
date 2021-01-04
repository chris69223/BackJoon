#include <stdio.h>
int cnt1 = 0;
int cnt2 = 0;
int fibo(int n)
{
		if (n == 0)
		{
			cnt1++;
		}
		else if (n == 1)
		{
			cnt2++;
		}
		else
		{
			return fibo(n - 1) + fibo(n - 2);
		}
}
int main()
{
	int num, d;
	scanf("%d", &num);
	getchar();
	fibo(num);
	for(int i=0;i<num;i++){
		scanf("%d", &d);
		getchar();
		fibo(d);
		printf("%d %d", cnt1, cnt2);
		cnt1 = 0, cnt2 = 0;
	}
	return 0;
}