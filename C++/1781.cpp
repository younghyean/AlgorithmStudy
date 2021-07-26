#include <bits/stdc++.h>

using namespace std;

int n, result;
vector<pair<int, int>> nodle;
priority_queue<int> pq;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		nodle.push_back({ x,y });
	}
	sort(nodle.begin(), nodle.end());
	for (int i = 0; i < n; i++) {
		int a = nodle[i].first;
		int b = nodle[i].second;
		pq.push(-b);
		if (a < pq.size()) {
			pq.pop();
		}
	}
	while (!pq.empty()) {
		result += -pq.top();
		pq.pop();
	}
	cout << result;

}