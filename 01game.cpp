#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int x = 0;
		int y = 0;
		for (int i = 0; i < s.size(); i++) {
			s[i] == '1' ? x++ : y++;
			}
		int n = min(x, y);
		n%2 == 0 ? cout << "NET\n" : cout << "DA\n";
		}
	}
