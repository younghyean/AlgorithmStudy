#include <bits/stdc++.h>

using namespace std;

int n, k, sum,max_value;
vector<int> arr;
vector<int> distances;
int main() {
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	if (k >= n) {
		cout << 0;
		return 0;
	}
	sort(arr.begin(), arr.end());
	for (int i = 1; i < arr.size(); i++){
		distances.push_back(arr[i] - arr[i - 1]);
	}
	sort(distances.begin(), distances.end(), greater<>());

	for (int i = 0; i < k - 1; i++) {
		distances[i] = 0;
	}
	for (int i = 0; i < distances.size(); i++) {
		sum += distances[i];
	}
	cout << sum;
}