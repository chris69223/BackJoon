#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char array2[2000];
	char array[2000] = "C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations.By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use inapplications that had formerly been coded in assembly language, including operatingsystems, as well as various application software for computers ranging from supercomputers to embedded systems.";
	printf("�˻� �ܾ� �Է� :");
	gets(array2);
	char* p1 = NULL;
	p1 = strstr(array, array2);
	
	if (p1 == NULL) 
	{
		printf("�Է��Ͻ� �ܾ �������� �ʽ��ϴ�.\n");
	}
	else
	{
		printf("���ڿ��� ���� ��ġ : %x\n", p1);
		printf("�� �� ���� : %s\n", p1);
	}
	return 0;
} 