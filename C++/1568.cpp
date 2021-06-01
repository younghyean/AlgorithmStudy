#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int sec=0;
	int count = 1;
	cin >> n;
	while (n != 0) {
		if (n - count < 0) {
			count = 1;
		}
		n = n - count;
		count++;
		sec++;
	}
	cout << sec;
}
