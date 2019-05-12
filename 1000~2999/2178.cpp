#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int map[101][101] = { 0, };
int check[101][101] = { 0, };
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int N, M;
void bfs(int x, int y) {

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	check[x][y] = 1;
	while (!q.empty()) {

		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if ((0 <= nx && nx < N) && (0 <= ny && ny < M)) {
				if (check[nx][ny] == 0 && map[nx][ny] == 1) {
					check[nx][ny] = check[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}
int main() {
	scanf("%d %d", &N, &M);
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	bfs(0, 0);
	printf("%d", check[N - 1][M - 1]);
	return 0;
}