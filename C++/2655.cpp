#include <bits/stdc++.h>

using namespace std;
typedef struct  Stat
{
	int idx, area, height, weight;
}Stat;
vector<Stat> arr(101);
int n;
vector<int> result;
int dp[101] = { 0, };
bool cmp(Stat& u, Stat& v) {
	if (u.weight < v.weight) return 1;
	return 0;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i].area >> arr[i].height >> arr[i].weight;
		arr[i].idx=i;
	}
	sort(arr.begin() + 1, arr.begin() + 1 + n, cmp);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i].area > arr[j].area) {
				dp[i] = max(dp[i], dp[j] + arr[i].height);
			}
		}
	}
	int max_value = 0;
	for (auto a : dp) {
		if (max_value < a)max_value = a;
	}
	int ind = n;
	while (ind != 0) {
		if (max_value == dp[ind]) {
			result.push_back(arr[ind].idx);
			max_value -= arr[ind].height;
		}
		ind -= 1;
	}
	cout << result.size() << '\n';
	for (int i = result.size() - 1; i >= 0; i--) {
		cout << result[i] << '\n';
	}
	
}