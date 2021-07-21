#include <bits/stdc++.h>

using namespace std;

int n, m, start, finish;
vector<pair<int, int> > adj[500];
int d[500];
vector<pair<int, int> > reverseAdj[500];
bool dropped[500][500];

void dijkstra() {
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, start));
	d[start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first; // ���� �������� ��� 
		int now = pq.top().second; // ���� ��� 
		pq.pop();
		if (d[now] < dist) continue;
		for (int i = 0; i < adj[now].size(); i++) {
			int next = adj[now][i].first; // ���� ��� 
			int nextDist = dist + adj[now][i].second; // ���� ��带 ���� ���� ��� 
			if (d[next] > nextDist && !dropped[now][next]) {
				d[next] = nextDist;
				pq.push(make_pair(-nextDist, next));
			}
		}
	}
}

void bfs() {
	queue<int> q;
	q.push(finish);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == start) continue;
		for (int i = 0; i < reverseAdj[now].size(); i++) {
			int prev = reverseAdj[now][i].first;
			int cost = reverseAdj[now][i].second;
			// �ִ� ��ο� ���Ե� ��� üũ�ϱ� 
			if (d[now] == d[prev] + cost && !dropped[prev][now]) {
				dropped[prev][now] = true;
				q.push(prev);
			}
		}
	}
}

int main() {
	while (true) {
		cin >> n >> m;
		if (n == 0 && m==0) break;
		cin >> start >> finish;
		for (int i = 0; i < n; i++) {
			adj[i].clear();
			reverseAdj[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int x, y, cost;
			cin >> x >> y >> cost;
			adj[x].push_back(make_pair(y, cost));
			reverseAdj[y].push_back(make_pair(x, cost));
		}
		// false�� �ʱ�ȭ�� ���� memset() �Լ� �̿� 
		memset(dropped, false, sizeof(dropped));
		// Ư���� ������ �ʱ�ȭ�� ���� fill() �Լ� �̿� 
		fill(d, d + 500, 1e9);
		dijkstra();
		bfs();
		fill(d, d + 500, 1e9);
		dijkstra();
		if (d[finish] != 1e9) {
			cout << d[finish] << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
}