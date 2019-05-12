#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M;
vector<int> graph[10001];
vector<int> hacking;
vector<int> visited;

int ans;
void dfs(int node) {
	hacking[node]++;
	
	for (int i = 0; i < graph[node].size(); i++) {
		int next_node = graph[node][i];
		if (!visited[next_node]) {
			visited[next_node]++;
			dfs(next_node);
		}
	}
}
int main() {
	int start, end;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> start >> end;
		graph[start].push_back(end);
	}
	hacking = vector<int>(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		visited = vector<int>(N + 1, 0);

		visited[i]++;
		dfs(i);
	}
	ans = *max_element(hacking.begin(), hacking.end());

	for (int i = 1; i <= N; i++) {
		if (hacking[i] == ans)
			cout << i << " ";
	}
	return 0;
}