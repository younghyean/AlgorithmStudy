#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<int> result;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		result.push_back(temp);
	}
	sort(result.begin(), result.end());
	cout << result[m - 1];
}