#include <bits/stdc++.h>

using namespace std;
int n;
int result[10001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x); // scanf()로 빠르게 입력 
		result[x]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (result[i] != 0) {
			for (int j = 0; j < result[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}
