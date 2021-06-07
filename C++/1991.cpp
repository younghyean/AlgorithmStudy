#include <bits/stdc++.h>

using namespace std;
struct node {
	char left;
	char right;
};
int n;
struct node ddata[27];


void preOrder(char root) {
	if (root == '.') {
		return;
	}
	cout << root;
	preOrder(ddata[root].left);
	preOrder(ddata[root].right);
}
void inOrder(char root) {
	if (root == '.') {
		return;
	}
	inOrder(ddata[root].left);
	cout << root;
	inOrder(ddata[root].right);
}
void postOrder(char root) {
	if (root == '.') {
		return;
	}
	postOrder(ddata[root].left);
	postOrder(ddata[root].right);
	cout << root;
}
int main() {
	cin >> n;
	char a, b, c;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		ddata[a].left = b;
		ddata[a].right = c;
	}
	preOrder('A');
	cout << "\n";
	inOrder('A');
	cout << "\n";
	postOrder('A');
	cout << "\n";
}