#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> graph[1001];
vector<int> visited;
vector<int> visited2;
queue<int> q;
int N, M, V;

void dfs(int node) {
	visited[node]++;
	cout << node << " ";
	for (int i = 0; i < graph[node].size(); i++) {
		int next_node = graph[node][i];
		if (!visited[next_node]) {
			dfs(next_node);
		}
	}
}
void bfs(int node) {
	int next_node;
	visited2[node]++;
	q.push(node);
	while (!q.empty()) {
		next_node = q.front();
		q.pop();
		cout << next_node << " ";
		for (int i = 0; i < graph[next_node].size(); i++) {

			if (!visited2[graph[next_node][i]]) {

				q.push(graph[next_node][i]);
				visited2[graph[next_node][i]]++;
			}
			
		}
	}
}
int main() {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	visited = vector<int>(N + 1, 0);
	visited2 = vector<int>(N + 1, 0);
	for (int i = 1; i < N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(V);
	cout << endl;
	bfs(V);

	return 0;
}