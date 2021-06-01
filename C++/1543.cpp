#include<bits/stdc++.h>

using namespace std;
string document, word;
int result, index;
int main() {

	getline(cin, document);
	getline(cin, word);
	while (document.length() - index >= word.length()) {
		if (document.substr(index, word.length()) == word) {
			result += 1;
			index += word.length();
		}
		else {
			index++;
		}
	}
	cout << result;
}
