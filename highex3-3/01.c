#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>


int main()
{
	char array[20];
	char id[20];
	fprintf(stdout, "����� �����̸��� �Է��ϼ��� :");
	fscanf(stdin, "%s", array);
	fprintf(stdout, "����� �й����� �Է��ϼ��� :");
	fscanf(stdin, "%s", id);

	fprintf(stdout,"�̸� : %s, �й� : %s\n",array, id);

	return 0;
}
//���� �Է��� ��ĳ??

