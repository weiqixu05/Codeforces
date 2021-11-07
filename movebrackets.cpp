#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int min = 0;
		int tally = 0;
		for (int i = 0; i < n; i++) {
			if(s[i] == ')') {
				tally--;
				}
			else {tally++;}
			if (tally<min) {
				min=tally;
				}
			}
		cout << -min << "\n";
		}
	}
