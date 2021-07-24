#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	long long result = 0;
	for (int i = 1; i <= n; i++) {
		result += abs(i-arr[i-1]);
	}
	cout << result;
}