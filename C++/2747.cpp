#include <bits/stdc++.h>

using namespace std;
int n;
int main() {
	int a = 0;
	int b = 1;
	cin >> n;
	while (n > 0) {
		int temp = a;
		a = b;
		b = temp + b;
		n--;
	}
	cout << a;
}
