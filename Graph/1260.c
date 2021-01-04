#include <stdio.h>

int n; // 정점의 총 갯수
int rear=0, front=0;
int map[1001][1001], queue[1001], DFSvisit[1001], BFSvisit[1001]; // 인접 행렬과 방문 여부를 나타내는 배열

void DFS(int v)
{
	int i;

	DFSvisit[v] = 1; // 정점 v를 방문했다고 표시
	printf("%d ", v);
	for (i = 1; i <= n; i++)
	{	// 정점 v와 정점 i가 연결되었고, 정점 i를 방문하지 않았다면
		if (map[v][i] == 1 && DFSvisit[i]==0)
		{
			// 정점 i에서 다시 DFS를 시작한다
			DFS(i);  //8에서 5로 이동, 8에서 6으로 이동 주의!! 5에서 나오면 다시 8로 들어감.재귀 이해가 필요~
		}
	}
}//1연결 0은 연결x

void BFS(int v)
{
	int i, s; 
	printf("%d ", v);//시작지점
	queue[0] = v;
	rear++;
	BFSvisit[v] = 1;
	//queue[rear++] = v;
	while (front < rear) // 후단이 전단과 같거나 작으면 루프 탈출
	{
		// 큐의 첫번째에 있는 데이터를 제외하고 제외된 값을 가져오며, 전단 1 증가
		s= queue[front];
		front++;
		for (i = 1; i <= n; i++)
		{
			
			// 정점 v와 정점 i가 만나고, 정점 i를 방문하지 않은 상태일 경우
			if (map[s][i] == 1 && BFSvisit[i]==0)
			{
				BFSvisit[i] = 1;
				printf("%d ", i);
				 // 정점 i를 방문했다고 표시
				queue[rear] = i;//후단을 증가시킴
				rear++;
				
			}
		}
	}
}

int main()
{
	int start; // 시작 정점

	int v1, v2; //인접행렬에 넣을 행,열의 입력값
	int g;//간선의 개수 

	scanf("%d %d %d", &n,&g,&start); //정점의 갯수와 시작정점을 입력

	for (int i = 0; i < g;i++) //인접행렬 만들기!
	{
		scanf("%d %d", &v1, &v2);
		map[v1][v2] = map[v2][v1] = 1; // 정점 v1과 정점 v2가 연결되었다고 표시

	} //행렬 다 만들고,

	DFS(start); // DFS (깊이탐색) 시작!
	printf("\n");
	BFS(start);


	return 0;

}


