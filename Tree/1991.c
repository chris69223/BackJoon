#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode {
	char data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode* creatNode(char newdata);//생성함수 
void insert_Node(treeNode* root, char a, char b, char c);//삽입함수
treeNode* search(treeNode* root, char data);//탐색함수
void preorder(treeNode* root);//전위 dlr
void inorder(treeNode* root);//중위
void postorder(treeNode* root);//후위

int main()
{
	treeNode* root = creatNode(NULL); // 루트 포인터를 생성 및 초기화
	treeNode* tmp;// tmp 포인터 선언 
	int num;
	char A, B, C;
	scanf("%d", &num);
	getchar();
	for (int i = 0; i < num; i++)
	{
		scanf("%c %c %c",&A,&B,&C);
		tmp = search(root, A);//A가
		if (tmp != NULL)//root와A를 탐색한 결과가 값이 있으면tmp에 삽입해주고 
			insert_Node(tmp, A, B, C);
		else//root와 A 를 탐색한 결과가 없으면 root를에 삽입
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
	if (B != '.')//B와 C에 .이 아니라면 데이터 삽입
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
	if (root != NULL) {//루트노드가 공백x 조건임 
		if (root->data == data) {//루트에 데이터가 입력값 즉 A랑 같으면 
			return root; 
		}
		else {
			tmp = search(root->left, data);// 다르면 tmp에 다시 검사
			if (tmp != NULL) {//왼쪽 데이터검사 
				return tmp;
			}
			tmp = search(root->right, data);
			if (tmp != NULL) {//오른쪽 데이터 검사
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