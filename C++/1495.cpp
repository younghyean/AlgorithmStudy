#include <bits/stdc++.h>

using namespace std;
int dp[101][1001];
int n, s, m;
vector<int> arr;

int main() {

	cin >> n >> s >> m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	dp[0][s] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j] == 0) continue;
			if (j - arr[i - 1] >= 0) {
				dp[i][j - arr[i - 1]] = 1;
			}
			if (j + arr[i - 1] <= m) {
				dp[i][j + arr[i - 1]] = 1;
			}
		}
	}
	int result = -1;
	for (int i = m; i >= 0; i--) {
		if (dp[n][i] == 1) {
			result = i;
			break;
		}
	}
	cout << result;
}