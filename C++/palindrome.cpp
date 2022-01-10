#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lenPalindrome(string s, int left, int right) {
    int len = 1;
    if (right - left == 1) len = 0;
    while (left >= 0 && right < s.length()) {
        if (s[left] == s[right]) {
            left--;
            right++;
            len += 2;
        }
        else break;
    }
    return len;
}
int solution(string s)
{
    int answer = 1;
    int temp = 0;
    if (s.length() == 1) return 1;
    for (int i = 0; i < s.length(); i++) {
        answer = max({ answer , lenPalindrome(s, i, i + 1), lenPalindrome(s, i, i + 2) });
    }

    return answer;
}
int main() {
    cout << solution("abacde");
}