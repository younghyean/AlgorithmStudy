#include <bits/stdc++.h>
#define MAX 50

using namespace std;

int t,n, m, k;
bool visited[MAX][MAX];
int arr[MAX][MAX];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
 
void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
			continue;
		}
		if (arr[nx][ny] && !visited[nx][ny]) {
			dfs(nx, ny);
		}
	}
	
}
void bfs(int x, int y) {	
	queue<pair<int,int>> q;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}
			if (arr[nx][ny] && !visited[nx][ny]) {
				visited[nx][ny]=true;
				q.push({ nx,ny });
			}
		}
	}


}
int main() {
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));
		int y=0, x=0;
		for (int j = 0; j < k; j++) {
			cin >> y >> x;
			arr[x][y] = 1;
		}
		int result = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] && !visited[i][j]) {
					bfs(i, j);
					result++;
				}
			}
		}
		cout << result << '\n';
	}
}