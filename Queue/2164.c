#include <stdio.h>
#include <stdbool.h> 
int patternMatch(char *, char *, int, int);

int main()
{
	int num;

	if ((num = patternMatch("ng", "young sang ", 10, 3)) != 8) {
		printf("[ ng 가 %d번지부터(0~%d) 존재합니다.]\n", num, num);
	}
	if ((num = patternMatch("en", "young sang", 10, 3)) == 8) {
		printf("[ en 가 문자열의 %d(0~%d)번지에 존재하지 않습니다.]\n", num, num);
	}
	return 0;
}

int patternMatch(char *P, char *S, int n, int m)
{
	int r;
	int l = 0;
	printf("l : %d\n", l);
	bool matched =false;
	while ((l <= n - m) && !matched) {
		printf(" %d <= %d - %d && !%d \n", l,n,m, matched); 
		l = l + 1;
		printf("l : %d\n", l);
		r = 0;
		printf("r : %d\n", r);
		matched = true;
		printf("mat : %d\n", matched);

		while ((r < m - 1) && matched) {
			printf(" %d < %d && %d \n", r,m, matched); 
			matched = matched && (P[r] == S[l + r]);
			printf("mat : %d \n", matched);
			r = r + 1;
			printf("r : %d\n", r);
		}
	}
	printf("return : %d\n", l);
	return l;
}