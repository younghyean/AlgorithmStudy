#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	vector<int> x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		x.push_back(temp);
	}
	sort(x.begin(), x.end());
	for (auto a : x) {
		cout << a << '\n';
	}
}