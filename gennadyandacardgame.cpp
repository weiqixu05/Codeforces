#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int tally = 0;
	for (int i = 0; i < 5; i++) {
		string a;
		cin >> a;
		if(s[1] == a[1] || s[0] == a[0]) {
			tally++;
			}
		}
	tally > 0 ? cout << "YES" : cout << "NO";
	}
