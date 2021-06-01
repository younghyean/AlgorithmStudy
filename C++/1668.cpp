#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> ddata;
int ascending() {
	int now = ddata[0];
	int result = 1;
	for (int i = 1; i < ddata.size(); i++) {
		if (now < ddata[i]) {
			result += 1;
			now = ddata[i];
		}
	}
	return result;
}
int main() {
	cin >> n;


	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		ddata.push_back(temp);
	}

	cout << ascending() << '\n';
	reverse(ddata.begin(), ddata.end());
	cout << ascending() << '\n';
}
