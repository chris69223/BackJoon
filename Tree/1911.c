#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode {
	char data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode head, tail;
treeNode* creatNode(char newdata);//data�� ��Ʈ �����Ͽ� ���ʰ� ������ �����Լ�

void preorder();//���� ��ȸ �Լ�
void inorder();//���� ��ȸ �Լ�
void postorder(); //���� ��ȸ �Լ�


int main()
{
	treeNode *root = NULL;
	int num;
	treeNode t;
	char a, b, c;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%c %c %c", &t.data, &t.left, &t.right);
		creatNode(a, b, c);
	}
	preorder(root);

}

treeNode* creatNode(char newdata, treeNode* leftNode, treeNode* rightNode)
{
	treeNode* root = (treeNode *)malloc(sizeof(treeNode));
	
	if (strcmp(leftNode, '.') == 0)
	{
		leftNode = NULL;
	}
	else if (strcmp(rightNode ,'.') == 0)
	{
		leftNode = NULL;
	}
	root->data = newdata;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}


void preorder(treeNode* root)//���� dlr
{
	if (root == NULL)
		return;
	printf("%d", root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(treeNode* root)//���� ldr
{
	if (root == NULL)
		return;
	preorder(root->left);
	printf("%d", root->data);
	preorder(root->right);
}

void postorder(treeNode* root)//���� lrd
{
	if (root == NULL)
		return;
	preorder(root->left);
	preorder(root->right);
	printf("%d", root->data);
}