#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	priority_queue<int> arr;
	vector<int> result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp != 0) arr.push(-temp);
		else {
			if (arr.empty()) result.push_back(temp);
			else {
				result.push_back(-arr.top());
				arr.pop();
			}
		}
	}
	for (auto a : result) {
		cout << a << endl;
	}
}