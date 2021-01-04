#include <stdio.h>

int n; // ������ �� ����
int rear = 0, front = 0;
int map[1001][1001], queue[1001], BFSvisit[1001]; // ���� ��İ� �湮 ���θ� ��Ÿ���� �迭
int cnt = 0;

void BFS(int v)
{
	int i, s;
	queue[0] = v;
	rear++;
	BFSvisit[v] = 1;
	//queue[rear++] = v;
	while (front < rear) // �Ĵ��� ���ܰ� ���ų� ������ ���� Ż��
	{
		// ť�� ù��°�� �ִ� �����͸� �����ϰ� ���ܵ� ���� ��������, ���� 1 ����
		s = queue[front];
		front++;
		for (i = 1; i <= n; i++)
		{

			// ���� v�� ���� i�� ������, ���� i�� �湮���� ���� ������ ���
			if (map[s][i] == 1 && BFSvisit[i] == 0)
			{
				BFSvisit[i] = 1;
				cnt++;
				// ���� i�� �湮�ߴٰ� ǥ��
				queue[rear] = i;//�Ĵ��� ������Ŵ
				rear++;

			}
		}
	}
	printf("%d", cnt);
}

int main()
{
	
	int v1, v2; //������Ŀ� ���� ��,���� �Է°�
	int g;//������ ���� 

	scanf("%d", &n);//������ ����
	scanf("%d", &g);//������ ���� 
	for (int i = 0; i < g; i++) //������� �����!
	{
		scanf("%d %d", &v1, &v2);
		map[v1][v2] = map[v2][v1] = 1; // ���� v1�� ���� v2�� ����Ǿ��ٰ� ǥ��

	} //��� �� �����,

	BFS(1);
	return 0;
}


