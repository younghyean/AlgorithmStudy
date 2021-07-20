#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int t, n, m, start;
vector<pair<int, int>> adj[10001];
int d[10001];
void dijkstra() {
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	d[start] = 0;
	while (!pq.empty())
	{
		int dist = -pq.top().first; // ���� �������� ���
		int now = pq.top().second;
		pq.pop();
		if (d[now] < dist) continue;
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i].first;
			int nextDist = dist + adj[now][i].second;//���� ��带 ���� ���� ���
			if (d[next] > nextDist) {
				d[next] = nextDist;
				pq.push(make_pair(-nextDist, next));
			}
		}
	}
}

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> m >> start;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		fill(d, d + 10001, INF);
		for (int i = 0; i < m; i++) {
			int x, y, cost;
			cin >> x >> y >> cost;
			adj[y].push_back(make_pair(x, cost));
		}
		dijkstra();
		int cnt = 0;
		int maxDistance = 0;
		for (int i = 1; i <= n; i++) {
			if (d[i] != INF) {
				cnt++;
				maxDistance = max(maxDistance, d[i]);
			}
		}
		cout << cnt << ' ' << maxDistance << '\n';
	}
}