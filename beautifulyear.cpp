#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int t = n;
	string s = to_string(n);
	bool ok = 1;
	while (ok) {
		int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		for(int j = 0; j < s.size(); j++) {
			if(s[i] == s[j]) {
				sum++;
				}
			}
		}
		if(sum>4||n==t) {
		n++;
		s=to_string(n);
		}
	else {ok=0;}
	}
	cout << n;
	}
