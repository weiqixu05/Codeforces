#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int something = 0;
	for (int i = 0; i < s.size(); i++) {
		int z = 0;
		for (int n = 0; n < s.size(); n++) {
			if (s[i] == s[n] && i > n) {
				z++;
				}
			}
			if (z > 0) {
				something++;
				}
		}
		if ((s.size()-something)%2 == 0) {
			cout << "CHAT WITH HER!";
			}
		else {cout << "IGNORE HIM!";}
	}
