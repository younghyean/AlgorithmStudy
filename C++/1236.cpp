#include<bits/stdc++.h>

using namespace std;
int n,m;
char ddata[50][50];
int row[50], col[50];
int main() {
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ddata[i][j];
			if (ddata[i][j] == 'X') {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	int row_count = 0;
	for (int i = 0; i < n; i++) {
		if (row[i] == 0) row_count++;
	}

	int col_count = 0;
	for (int j = 0; j < m; j++) {
		if (col[j] == 0) col_count++;
	}
	cout << max(row_count, col_count);
}
