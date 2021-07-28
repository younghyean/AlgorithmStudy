#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N,answer;
int max_value;
vector<pair<int, int> > adj[20001];
int d[20001];
void dijkstra(int start) {
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, start));
	d[start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first; // 현재 노드까지의 비용 
		int now = pq.top().second; // 현재 노드 
		pq.pop();
		if (d[now] < dist) continue;
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i].first; // 다음 노드 
			int nextDist = dist + adj[now][i].second; // 현재 노드를 거쳐 가는 비용 
			if (d[next] > nextDist) {
				d[next] = nextDist;
				pq.push(make_pair(-nextDist, next));
			}
		}
	}
}
int solution(int n, vector<vector<int>> edge) {
	sort(edge.begin(), edge.end());
	for (int i = 0; i < edge.size(); i++) {
		int x = edge[i][0];
		int y = edge[i][1];
		adj[x].push_back({ y,1 });
		adj[y].push_back({ x,1 });
	}
	fill(d, d + n + 1, 1e9);
	dijkstra(1);
	max_value = d[1];
	for (int i = 2; i <= n; i++) {
		if (max_value < d[i]) {
			max_value = d[i];
		}
	}
	for (int i = 2; i <= n; i++) {
		if (max_value == d[i]) {
			answer++;
		}
	}
	return answer;
}
int main() {
	cout << solution(6, {{3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2}});
}