#include <stdio.h>

int n; // ������ �� ����
int rear=0, front=0;
int map[1001][1001], queue[1001], DFSvisit[1001], BFSvisit[1001]; // ���� ��İ� �湮 ���θ� ��Ÿ���� �迭

void DFS(int v)
{
	int i;

	DFSvisit[v] = 1; // ���� v�� �湮�ߴٰ� ǥ��
	printf("%d ", v);
	for (i = 1; i <= n; i++)
	{	// ���� v�� ���� i�� ����Ǿ���, ���� i�� �湮���� �ʾҴٸ�
		if (map[v][i] == 1 && DFSvisit[i]==0)
		{
			// ���� i���� �ٽ� DFS�� �����Ѵ�
			DFS(i);  //8���� 5�� �̵�, 8���� 6���� �̵� ����!! 5���� ������ �ٽ� 8�� ��.��� ���ذ� �ʿ�~
		}
	}
}//1���� 0�� ����x

void BFS(int v)
{
	int i, s; 
	printf("%d ", v);//��������
	queue[0] = v;
	rear++;
	BFSvisit[v] = 1;
	//queue[rear++] = v;
	while (front < rear) // �Ĵ��� ���ܰ� ���ų� ������ ���� Ż��
	{
		// ť�� ù��°�� �ִ� �����͸� �����ϰ� ���ܵ� ���� ��������, ���� 1 ����
		s= queue[front];
		front++;
		for (i = 1; i <= n; i++)
		{
			
			// ���� v�� ���� i�� ������, ���� i�� �湮���� ���� ������ ���
			if (map[s][i] == 1 && BFSvisit[i]==0)
			{
				BFSvisit[i] = 1;
				printf("%d ", i);
				 // ���� i�� �湮�ߴٰ� ǥ��
				queue[rear] = i;//�Ĵ��� ������Ŵ
				rear++;
				
			}
		}
	}
}

int main()
{
	int start; // ���� ����

	int v1, v2; //������Ŀ� ���� ��,���� �Է°�
	int g;//������ ���� 

	scanf("%d %d %d", &n,&g,&start); //������ ������ ���������� �Է�

	for (int i = 0; i < g;i++) //������� �����!
	{
		scanf("%d %d", &v1, &v2);
		map[v1][v2] = map[v2][v1] = 1; // ���� v1�� ���� v2�� ����Ǿ��ٰ� ǥ��

	} //��� �� �����,

	DFS(start); // DFS (����Ž��) ����!
	printf("\n");
	BFS(start);


	return 0;

}


