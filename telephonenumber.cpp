#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		bool yes = false;
		cin >> n >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] - '0' == 8 && n - i >= 11) {
				yes = true;
				break;
				}
			}
		if (yes == true) {
			cout << "YES\n";
			}
		else {cout << "NO\n";}
		}
	}
