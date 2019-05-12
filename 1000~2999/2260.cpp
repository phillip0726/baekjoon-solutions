#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector <int> graph[51];
vector <int> score[50];
queue <pair<int,int>> p;

int N;

void bfs() {
	for (int i = 1; i <= N; i++) {
		int check[51] = { 0, };
		int count;
		p.push(make_pair(i,0));
		check[i] = 1;
		while (!p.empty()) {
			int flag = 0;
			int j = p.front().first;
			count = p.front().second;
			p.pop();
			for (int k = 0; k < graph[j].size(); k++) {
				if (check[graph[j][k]] == 0) {
					p.push(make_pair(graph[j][k],count+1));
					check[graph[j][k]] = 1;
				}
			}
		}
		//printf("%d %d\n", i, count);
		score[count].push_back(i);
	}
}
int main() {
	scanf("%d", &N);
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == -1 && b == -1)
			break;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	bfs();
	int i;
	for (i = 1; !score[i].size(); i++) {}
	printf("%d %d\n", i, score[i].size());
	sort(score[i].begin(), score[i].end());
	for (int k = 0; k < score[i].size(); k++) {
		printf("%d ", score[i][k]);
	}

	return 0;
}