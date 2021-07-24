#include <bits/stdc++.h>

using namespace std;

int n,m,cnt;
vector<int> cranes;
vector<int> boxes;
queue<int> q;

int positions[50]; // 각 크레인이 현재 옮겨야 하는 박스의 번호 (0부터 시작) 
bool checked[10000]; // 각 박스를 옮겼는지의 여부 
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		cranes.push_back(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		boxes.push_back(temp);
	}
	sort(cranes.begin(), cranes.end(),greater<>());
	sort(boxes.begin(), boxes.end(), greater<>());
	if (cranes[0] < boxes[0]) {
		cout << -1;
		return 0;
	}
	int result = 0;
	while (true) {
		if (cnt == m) break;
		for (int i = 0; i < n; i++) {
			while (positions[i] < m) {
				if (!checked[positions[i]] && cranes[i] >= boxes[positions[i]]) {
					checked[positions[i]] = true;
					positions[i] += 1;
					cnt += 1;
					break;
				}
				positions[i] += 1;
			}
		}
		result += 1;
	}
	cout << result;
}