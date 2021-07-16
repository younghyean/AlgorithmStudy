#include <bits/stdc++.h>

using namespace std;
int n, m, v;
vector<int> adj[1001];
bool d[1001];
void dfs(int x) {
	if (d[x]) return;
	d[x] = true;
	cout << x << ' ';
	for (int i = 0; i < adj[x].size(); i++) {
		int y = adj[x][i];
		dfs(y);
	}
}
void bfs(int x) {
	queue<int> q;
	q.push(x);
	d[x] = true;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << now << ' ';
		for (int i = 0; i < adj[now].size(); i++) {
			int y = adj[now][i];
			if (!d[y]) {
				q.push(y);
				d[y] = true;
			}
		}
	}
}
int main() {
	cin >> n >> m >> v;
	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(v);
	cout << '\n';
	memset(d, false, sizeof(d));
	bfs(v);
}