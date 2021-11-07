#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	int sum = 1;
	int n = 0;
	for(int i = 0; i < t.size(); i++) {
		if(t[i] == s[n]) {
			sum++;
			n++;
			}
		}
	cout << sum;
	}
