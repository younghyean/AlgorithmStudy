#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	priority_queue<int> arr;
	vector<int> card;
	int result = 0,sum1=0 ,sum2=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push(-temp);
	}
	while (arr.size() > 1) {
		sum1 = -arr.top();
		arr.pop();
		sum2 = -arr.top();
		arr.pop();
		result += sum1 + sum2;
		arr.push(-result);
	}
	cout << result << '\n';
}