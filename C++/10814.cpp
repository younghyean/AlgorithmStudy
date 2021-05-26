#include <bits/stdc++.h>

using namespace std;

int n;

bool cmp(const pair<int, string> &a, const pair<int, string> &b)
{
	return a.first < b.first;
	if (a.first == b.first) {
		return true;
	}
}

int main() {
	cin >> n;
	vector<pair<int, string> > user;
    
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		user.push_back({ age,name });
	}
	sort(user.begin(), user.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << user.at(i).first << ' ' << user.at(i).second << '\n';
	}

}