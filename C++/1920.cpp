#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main() {
	int N, M;
	set<int> a;
	vector<int> b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		a.insert(temp);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		b.push_back(temp);
	}
	for (auto x : b) {
		if (a.count(x)) cout << "1\n";
		else cout << "0\n";
	}
}