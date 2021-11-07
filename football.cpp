#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int something = 0;
	int random = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			something++;
			}
		else if (s[i] != s[i-1]) {something = 0;}
		if (something == 6) {
			random  = 1;
			}
		}
		if (random == 0) {
			cout << "NO";
			}
		else {cout << "YES";}
	}
