#include <bits/stdc++.h>

using namespace std;

int n, result;
int row[15];
bool check(int x) {
	for (int i = 0; i < x; i++) {
		if (row[i] == row[x]) return false;
		if (abs(row[x] - row[i]) == x - i) return false;
	}
	return true;
}
void dfs(int x) {
	if (x == n) result += 1;
	for (int i = 0; i < n; i++) {
		row[x] = i;
		if (check(x)) {
			dfs(x + 1); 
		}
	}
}
int main() {
	cin >> n;
	dfs(0);
	cout << result;
}