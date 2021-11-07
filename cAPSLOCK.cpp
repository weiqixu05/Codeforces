#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	if(s.size()==1) {
		if(s[0] > 96) {
			s[0]-=32;
			cout << s[0];
			}
		else {s[0]+=32;
			cout << s;}
		}
	else {
		string t;
		int n = s.size();
		int a[n];
		for (int i = 0; i < n; i++) {
			a[i]=(int)s[i];
			}
		sort(a, a+n);
		if (a[0] < 96 && a[n-1] < 96) {
			for (int i = 0; i < n; i++) {
			s[i]+=32;
			cout << s[i];}
			}
		else if(a[n-1] > 96 && a[n-2] < 96 && s[0] > 96) {
			s[0]-=32;
			cout << s[0];
			for (int i = 1; i < n; i++) {
				s[i]+=32;
				cout << s[i];
				}
			}
			else {cout << s;}
			}
	}
