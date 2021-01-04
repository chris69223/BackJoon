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

	for (i = 0; i < num; i++) { //같은 단어는 하나만 나오게 출력
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
	if (a_len == b_len) {//길이가 같으면
		return strcmp((char*)a, (char*)b);//같으면 0리턴 a가 더 크면 즉1리턴
										//a가 더 작으면 -1리턴
	}
	else if (a_len > b_len) {//a가 더크면 
		return 1;
	}
	else {//작으면 return -1
		return -1;
	}
}
