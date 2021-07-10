#include <bits/stdc++.h>

using namespace std;
#define MAX 32001
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> Problem[MAX];
	vector<int> Entry(MAX);
	priority_queue<int> arr;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		Problem[a].push_back(b);
		Entry[b]++;
	}
	for (int i = 1; i <= N; i++) {
		if (Entry[i] == 0) arr.push(-i);
	}
	while (!arr.empty()) {
		int temp;
		temp = -arr.top();
		cout << temp << " ";
		arr.pop();
		for (int i = 0; i < Problem[temp].size(); i++) {
			Entry[Problem[temp][i]]--;
			if (Entry[Problem[temp][i]] == 0) arr.push(-Problem[temp][i]);
		}
	}
	
}