#include <bits/stdc++.h>

using namespace std;

#define MAX 10001

int n,m,start,finish;
class Edge {
public:
	int node;
	int time;
	Edge(int node, int time) {
		this->node = node;
		this->time = time;
	}
};
vector<Edge> a[MAX];
vector<Edge> b[MAX];
int result[MAX];
int inDegree[MAX];
int c[MAX];

void toplogySort() {
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < a[x].size(); i++) {
			Edge y = Edge(a[x][i].node, a[x][i].time);
			if (result[y.node] <= y.time + result[x]) {
				result[y.node] = y.time + result[x];
			}
			if (--inDegree[y.node] == 0) q.push(y.node);
		}
	}
	int count = 0;
	q.push(finish);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		for (int i = 0; i < b[y].size(); i++) {
			Edge x = Edge(b[y][i].node, b[y][i].time);
			if (result[y] - result[x.node] == x.time) {
				count++;
				if (c[x.node] == 0) {
					q.push(x.node);
					c[x.node] = 1;
				}
			}
		}
	}
	printf("%d\n%d", result[finish], count);
	
}
int main()
{
	cin >> n >> m;
	int x, node, time;
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &x, &node, &time);
		a[x].push_back(Edge(node, time));
		b[node].push_back(Edge(x, time));
		inDegree[node]++;
	}
	scanf("%d %d", &start, &finish);
	toplogySort();

}