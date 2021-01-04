#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct pos
{
	int x;
	int y;
	

};

struct pos input(struct pos* pp);

int main() 
{
	struct pos var1;
	struct pos* p = &var1;
	var1 = input(p);
	printf("결과 : x=%d, y=%d", p->x, p->y );

	return 0;
}

struct pos input(struct pos* pp)
{
	printf("x의 값을 입력하세요 ");
	scanf("%d",&(pp->x) );
	printf("y의 값을 입력하세요 ");
	scanf("%d",&(pp->y));
}