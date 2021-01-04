#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
typedef struct word
{
	char w[51];
}word;

int main(void) {
	int num;
	int i;

	scanf("%d", &num);
	word arr[20000];
	for (i = 0; i < num; i++) {
		scanf("%s", arr[i].w);
	}
	qsort(arr, num, sizeof(arr[0]), compare);

	for (i = 0; i < num; i++) { //���� �ܾ�� �ϳ��� ������ ���
		if (!strcmp(arr[i].w, arr[i+1].w)) {
			continue;
		}
		else {
			printf("%s\n",  arr[i].w);
		}
	}
	return 0;
}
int compare(const void *a, const void *b) {

	int a_len = strlen(a);
	int b_len = strlen(b);
	if (a_len == b_len) {//���̰� ������
		return strcmp((char*)a, (char*)b);//������ 0���� a�� �� ũ�� ��1����
										//a�� �� ������ -1����
	}
	else if (a_len > b_len) {//a�� ��ũ�� 
		return 1;
	}
	else {//������ return -1
		return -1;
	}
}
