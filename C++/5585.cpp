#include <bits/stdc++.h>

using namespace std;

int n, cost,result;
int money[] = { 500,100,50,10,5,1 };
int main() {
	cin >> n;
	cost = 1000 - n;
	result = 0;
	for (int i = 0; i < 6; i++) {
		if (cost == 0) {
			break;
		}
		result += cost / money[i];
		cost = cost % money[i];
	}
	cout << result;

}