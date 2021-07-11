#include <bits/stdc++.h>

using namespace std;
int n, result;
vector<int> ddata;
int dp[1000];
int main() {
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		ddata.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (ddata[j] < ddata[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(result, dp[i]);
	}
	cout << result;
}