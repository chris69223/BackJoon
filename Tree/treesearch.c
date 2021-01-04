#include <stdio.h>
#include <stdlib.h>

typedef struct NodeStruct
{
	int data;
	struct NodeStruct* left;
	struct NodeStruct* right;
}Node;

Node* root = NULL;
void menu();
Node* BST_insert(Node* root, int data);
Node* findMinNode(Node* root);//최소값 찾는 함수 
Node* BST_delete(Node* root, int data);
Node* BST_search(Node* root, int data);
void BST_print(Node* root);


int main1()
{
	int data;
	int num;
	while (1) 
	{
		
		int menu();
		scanf("")
		switch (num)
		{
		case 1:
			BTS_insert(root, data);
			break;
		case 2:
			BTS_search(root, data);
			break;
		case 3:
			BTS_delete(root, data);
			break;
		case 4:
			BTS_print(root, data);
			break;
		case 0:
			return 0;

				
		}

	}
	

}
void menu()
{
	
	printf("---------MENU---------\n");
	printf("1.데이터 입력\n");
	printf("2.데이터 검색\n");
	printf("3.데이터 삭제\n");
	printf("4.데이터 출력\n");
	printf("0.종료");

}

Node* BTS_insert(Node* root, int x)
{
	if (root == NULL)
	{
		Node* root = (Node*)malloc(sizeof(Node));
		root->left = NULL;
		root->right = NULL;
		return root;
	}
	else if (x < root->data)
		root->left = BTS_insert(root->left, x);
	else if (x > root->data)
		root->right = BTS_insert(root->right, x);
	else printf("이미 같으키가 있습니다!\n");
	return root;
}

Node* BTS_delete(Node* root, int data)
{
	Node* newNode = NULL;
	if (root == NULL)
		return NULL;

	if(root->data)
}