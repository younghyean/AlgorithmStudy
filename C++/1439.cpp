#include <bits/stdc++.h>

using namespace std;

string s;
int count0, count1;
int main() {
	cin >> s;
	count0 = 0, count1 = 0;
	s[0] == '1' ? count0 += 1 : count1 += 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1]) {
			if (s[i + 1] == '1') {
				count0 += 1;
			}
			else {
				count1 += 1;
			}
		}
	}
	cout << min(count0, count1);
}