#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode {
	int data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode* creatNode(char newdata);
void insert_Node(treeNode* root,int n);
treeNode* search(treeNode* root, char data);
void preorder(treeNode* root);//ÀüÀ§ dlr
void inorder(treeNode* root);
void postorder(treeNode* root);

int main()
{
	treeNode* root = creatNode(NULL);
	treeNode* tmp;
	int num;
	char A, B, C;
	scanf("%d", &num);
	getchar();
	for (int i = 0; i < num; i++)
	{
		scanf("%c %c %c", &A, &B, &C);
		getchar();
		tmp = search(root, A);
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

treeNode* creatNode(int data)
{
	treeNode* root = (treeNode *)malloc(sizeof(treeNode));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
}
void insert_Node(treeNode*root,int n)
{
	root->data = n;
}

treeNode* search(treeNode* root, char data)
{
	treeNode*tmp;
	if (root != NULL) {
		if (root->data == data) {
			return root;
		}
		else {
			tmp = search(root->left, data);
			if (tmp != NULL) {
				return tmp;
			}
			tmp = search(root->right, data);
			if (tmp != NULL) {
				return tmp;
			}
		}
	}
	return NULL;
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