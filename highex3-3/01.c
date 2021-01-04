#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>


int main()
{
	char array[20];
	char id[20];
	fprintf(stdout, "당신의 영문이름을 입력하세요 :");
	fscanf(stdin, "%s", array);
	fprintf(stdout, "당신의 학번을을 입력하세요 :");
	fscanf(stdin, "%s", id);

	fprintf(stdout,"이름 : %s, 학번 : %s\n",array, id);

	return 0;
}
//띄어쓰기 입력은 어캐??

