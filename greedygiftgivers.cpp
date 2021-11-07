/*
 ID: weiqixu1
 PROG: gift1
 LANG: C++
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("gift1.in", "r", stdin); freopen("gift1.out", "w", stdout);
	int n;
	cin >> n;
	vector<int>money(n, 0);
	string names[n];
	for (int i = 0; i < n; i++) {
		cin >> names[i];
		}
	for (int z = 0; z < n; z++) {
		string s;
		cin >> s;
		int place;
		int a, b;
		cin >> a >> b;
		string temp[b];
		for (int i = 0; i < b; i++) {
			cin >> temp[i];
			}
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < n; j++) {
				if ((temp[i] == names[j]) && (a != 0 && b != 0)) {
					money[j] += a/b;
					}
				}
			}
		for (int i = 0; i < n; i++) {
			if (s == names[i]) {
				place = i;
				}
			}
			if (a != 0 && b != 0) {
		money[place] -= a;
		money[place] += a%b;
		}
		}
		for (int i = 0; i < n; i++) {
			cout << names[i] << " " << money[i] << "\n";
			}
	}
