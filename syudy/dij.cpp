#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
bool c[1001];
int a[1001][1001];
int n, m, s;
void dfs(int x) {
	if (c[x]) return;
	c[x] = true;


	cout << x << ' ';
	for (int i = 1; i <= n;i++) {
		if (a[x][i] && c[x]) {
			dfs(i);
		}
	}
}
void bfs(int x) {
	queue<int> q;
	q.push(x);
	c[x] = true;
	while (!q.empty()) {
		int temp = q.front();
		q.pop();

		cout << temp << ' ';
		for (int i = 1; i <= n; i++) {
			if (a[temp][i] && !c[i]) {
				q.push(i);
				c[i] = true;
			}
		}
	}
}
int main() {

	cin >> n >> m >> s;

	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		a[from][to]=1;
		a[to][from]=1;
	}
	dfs(s);
	memset(c,false,sizeof(c));
	cout << endl;
	bfs(s);
	return 0;
}