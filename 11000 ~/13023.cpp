#include <iostream>
#include<vector>

using namespace std;

vector<int> graph[2000];
vector <int> check;
int N, M;

void dfs(int idx, int depth) {
	if (depth == 4) {
		printf("1\n");
		exit(0);
	}
	check[idx] = 1;
	for (int i = 0; i < graph[idx].size(); i++) {
		int next = graph[idx][i];
		if (check[next] == 0) {
			dfs(next, depth+1);
		}
	}
	check[idx] = 0;

	
}
int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i <N; i++) {
		check = vector<int>(N, 0);
		dfs(i, 0);
	}
	printf("0\n");
	return 0;
}