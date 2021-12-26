#include <bits/stdc++.h>

using namespace std;

#define MAX 501

int n;
vector<int> a[MAX];
int result[MAX];
int inDegree[MAX];
int times[MAX];

void toplogySort() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
			result[i] = times[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		int x = q.front();
		q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			result[y] = max(result[y], result[x] + times[y]);
			if (--inDegree[y] == 0) q.push(y);
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d\n", result[i]);
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &times[i]);
		while (1) {
			int x;
			scanf("%d", &x);
			if (x == -1) break;
			a[x].push_back(i);
			inDegree[i]++;
		}
	}
	toplogySort();
	
}