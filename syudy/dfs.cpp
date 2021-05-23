#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

//void dfs(int x) {
//	if (c[x]) return;
//	c[x] = true;
//
//
//	cout << x << ' ';
//	for (int i = 1; i <= n; i++) {
//		if (a[x][i] && c[x]) {
//			dfs(i);
//		}
//	}
//}
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%1s", &war[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (war[i][j] == 'W') inwar[i][j] = 1;
//			else inwar[i][j] = 0;
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include <stack>
//#include<vector>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int count = 1;
//	stack<int> stack;
//	vector<char> result;
//	for (int i = 0; i < n; i++) {
//		int data;
//		cin >> data;
//		while (count <= data) {
//			stack.push(count);
//			count++;
//			result.push_back('+');
//		}
//		if (stack.top() == data) {
//			stack.pop();
//			result.push_back('-');
//		}
//		else {
//			cout << "NO";
//			return 0;
//		}	
//	}
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i] << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<queue>
#include<vector>
int main() {
	int test;
	int n, m;
	int temp;
	vector<int> order;
	cin >> test;
	for (int t = 0; t < test; t++) {
		priority_queue<pair<int, int>> pq;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			pq.push({ temp, i });
		
		}
		while (true) {
			int x = pq.top().first;
			int index = pq.top().second;
			pq.pop();
			if(x =)
		}
		for (auto x : order) {
			cout << x << '\n';
		}
	}

}