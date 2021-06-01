#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> ddata;

int main() {
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ddata.push_back(x);
	}

	sort(ddata.begin(), ddata.end());

	int start = ddata[1] - ddata[0];
	int end = ddata[n - 1] - ddata[0];
	int result = 0;

	while (start <= end) {
		int mid = (start + end) / 2;
		int value = ddata[0];
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			if (ddata[i] >= value + mid) {
				value = ddata[i];
				cnt += 1;
			}
		}
		if (cnt >= c) {
			start = mid + 1;
			result = mid;
		}
		else {
			end = mid - 1;
		}
	}

	cout << result;
}