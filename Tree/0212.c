#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct treeNode {
	char data;
	struct treeNode*left;
	struct treeNode*right;
}treeNode;

treeNode*makeNode(char data)
{
	treeNode*root;
	root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
}
treeNode*search_Node(treeNode*root, char data)
{
	treeNode*tmp;
	if (root != NULL) {
		if (root->data == data) {
			return root;
		}
		else {
			tmp = search_Node(root->left, data);
			if (tmp != NULL) {
				return tmp;
			}
			tmp = search_Node(root->right, data);
			if (tmp != NULL) {
				return tmp;
			}
		}
	}
	return NULL;
}
void insert_Node(treeNode*root, char A, char B, char C)
{
	root->data = A;
	if (B != '.')
	{
		root->left = makeNode(B);
	}
	if (C != '.')
	{
		root->right = makeNode(C);
	}
}

void preorder(treeNode*root)
{
	if (root != NULL)
	{
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(treeNode*root)
{

	if (root != NULL)
	{
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}
void postorder(treeNode*root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}
int main()
{
	treeNode*root = makeNode(NULL);
	treeNode*tmp;
	int n;
	char A, B, C;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%c %c %c", &A, &B, &C);
		getchar();
		tmp = search_Node(root, A);
		if (tmp != NULL)
			insert_Node(tmp, A, B, C);
		else
			insert_Node(root, A, B, C);
	}
	preorder(root); 
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
}