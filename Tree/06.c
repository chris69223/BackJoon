#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char treeNode[26][3];
int key[26];

void preorder(int root) {
	
	printf("%c",treeNode[root][0]);
	if (treeNode[root][1] != '.')
		preorder(key[treeNode[root][1] - 'A']);
	if (treeNode[root][2] != '.')
		preorder(key[treeNode[root][2] - 'A']);
}

void inorder(int root) {
	if (treeNode[root][1] != '.')
		inorder(key[treeNode[root][1] - 'A']);
	printf("%c", treeNode[root][0]);
	if (treeNode[root][2] != '.')
		inorder(key[treeNode[root][2] - 'A']);
}
void postorder(int root) {
	if (treeNode[root][1] != '.')
		postorder(key[treeNode[root][1] - 'A']);
	if (treeNode[root][2] != '.')
		postorder(key[treeNode[root][2] - 'A']);
	printf("%c", treeNode[root][0]);
}

int main() {
	int n;
	char temp_root, temp_left, temp_right;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		for (int t = 0; t < 3; t++) {
			scanf("%c",treeNode[i][t]);
		}
		key[treeNode[i][0] - 'A'] = i;
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");
}
