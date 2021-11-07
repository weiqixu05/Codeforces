#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	int l = 0;

	for (int i= 0; i < s.size(); i++) {
		if(s[i]=='|') {
			l = i;
			break;
			}
		}

	

		string left;
		for (int i = 0; i < l; i++) {
			left.push_back(s[i]);
			}
		string right;
		for (int i = l+1; i < s.size(); i++) {
			right.push_back(s[i]);
			}
		int k = t.size();
		int some = 0;
		while (k--) {
			left.size()>right.size()?right.push_back(t[some]):left.push_back(t[some]);
			some++;
			}
			if(left.size()==right.size()) {
		cout << left << "|" << right;
	} else {cout << "Impossible";}
		

	}
