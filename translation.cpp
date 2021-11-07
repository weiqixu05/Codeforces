#include <bits/stdc++.h>
using namespace std;
int main() {
	string t, s;
	cin >> t >> s;
	int k = s.size()-1;
	int sum = 0;
	int j = t.size();
	if (s.size() == t.size()) {
	for (int i = 0; i < j; i++) {
		if (t[i] == s[k]) {
			sum++;
			}
		k--;
			}
			int l = s.size();
			if (sum == l) {
			cout << "YES";
		}
		else {cout << "NO";}
		}
	else {cout << "NO";}
	}
