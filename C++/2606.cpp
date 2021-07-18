#include <bits/stdc++.h>

#define MAX 101

using namespace std;
int n, v, result;
bool d[MAX];
vector<int> arr[MAX];

void dfs(int x) {
	result++;
	d[x] = true;
	for (int i = 0; i < arr[x].size(); i++) {
		int y = arr[x][i];
		if (!d[y]) {
			dfs(y);
		}
	}
}
int bfs() {
	queue<int> q;
	q.push(1);
	d[1] = true;
	int count = 0;
	while(!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < arr[now].size(); i++) {
			int next = arr[now][i];
			if (!d[next]) {
				q.push(next);
				d[next] = true;
				count++;
			}
		}
	}
	return count;
}
int main() {
	cin >> n;
	cin >> v;
	int x, y;
	for (int i = 0; i < v; i++) {
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	dfs(1);
	//cout << bfs();	
}