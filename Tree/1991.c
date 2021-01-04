#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode {
	char data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode* creatNode(char newdata);//�����Լ� 
void insert_Node(treeNode* root, char a, char b, char c);//�����Լ�
treeNode* search(treeNode* root, char data);//Ž���Լ�
void preorder(treeNode* root);//���� dlr
void inorder(treeNode* root);//����
void postorder(treeNode* root);//����

int main()
{
	treeNode* root = creatNode(NULL); // ��Ʈ �����͸� ���� �� �ʱ�ȭ
	treeNode* tmp;// tmp ������ ���� 
	int num;
	char A, B, C;
	scanf("%d", &num);
	getchar();
	for (int i = 0; i < num; i++)
	{
		scanf("%c %c %c",&A,&B,&C);
		tmp = search(root, A);//A��
		if (tmp != NULL)//root��A�� Ž���� ����� ���� ������tmp�� �������ְ� 
			insert_Node(tmp, A, B, C);
		else//root�� A �� Ž���� ����� ������ root���� ����
			insert_Node(root, A, B, C);
	}
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	
	
}

treeNode* creatNode(char data)
{
	treeNode* root = (treeNode *)malloc(sizeof(treeNode));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
}
void insert_Node(treeNode*root, char A, char B, char C)
{
	root->data = A;
	if (B != '.')//B�� C�� .�� �ƴ϶�� ������ ����
	{
		root->left = creatNode(B);
	}
	if (C != '.')
	{
		root->right = creatNode(C);
	}
}

treeNode* search(treeNode* root, char data)//A 
{
	treeNode*tmp;
	if (root != NULL) {//��Ʈ��尡 ����x ������ 
		if (root->data == data) {//��Ʈ�� �����Ͱ� �Է°� �� A�� ������ 
			return root; 
		}
		else {
			tmp = search(root->left, data);// �ٸ��� tmp�� �ٽ� �˻�
			if (tmp != NULL) {//���� �����Ͱ˻� 
				return tmp;
			}
			tmp = search(root->right, data);
			if (tmp != NULL) {//������ ������ �˻�
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