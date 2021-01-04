#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	int key;
	struct treeNode* left;
	struct treenode* right;
}treeNode;

treeNode* insert(treeNode *p, int x);
void postorder(treeNode* root);

int main()
{
	int num;
	treeNode* root=NULL;
	while (scanf("%d", &num)!=EOF)
	{
		root=insert(root, num);
		
	}
	postorder(root);
	return 0;
}

treeNode* insert(treeNode *p, int x)
{
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key) p->left = insert(p->left, x);
	else if (x > p->key) p->right = insert(p->right, x);
	else printf("\n 이미 같은 키가 있습니다!\n");
	return p;
}


void postorder(treeNode* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\n", root->key);
	}
}