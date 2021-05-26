#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int> > ddata;


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		int y;
		cin >> x >> y;
		ddata.push_back(make_pair(x, y));
	}
	sort(ddata.begin(), ddata.end());
	for (auto x : ddata) {
		cout << x.first << " " << x.second << '\n';
	}

}