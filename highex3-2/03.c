#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char array2[2000];
	char array[2000] = "C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations.By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use inapplications that had formerly been coded in assembly language, including operatingsystems, as well as various application software for computers ranging from supercomputers to embedded systems.";
	printf("검색 단어 입력 :");
	gets(array2);
	char* p1 = NULL;
	p1 = strstr(array, array2);
	
	if (p1 == NULL) 
	{
		printf("입력하신 단어가 존재하지 않습니다.\n");
	}
	else
	{
		printf("문자열의 시작 위치 : %x\n", p1);
		printf("이 후 구절 : %s\n", p1);
	}
	return 0;
} 