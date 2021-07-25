#include <bits/stdc++.h>

using namespace std;

int n, m, result, max_value,min_value;
vector<int> arr;
int main() {
	cin >> n;
	cin >> m;
	priority_queue<int> q1;
	priority_queue<int> q2;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		max_value = max(max_value, x);
		min_value = min(min_value, x);
	}
	int largest = max(max_value, -min_value);
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) q1.push(arr[i]);
		else q2.push(-arr[i]);
	}

	while (!q1.empty()){
		result += q1.top();
		q1.pop();
		for (int i = 0; i < m - 1; i++) {
			if (!q1.empty()) q1.pop();
		}
	}
	while (!q2.empty()) {
		result += q2.top();
		q2.pop();
		for (int i = 0; i < m - 1; i++) {
			if (!q2.empty()) q2.pop();
		}
	}
	cout << result * 2 - largest;


}