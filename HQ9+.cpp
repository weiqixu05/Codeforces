#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	bool counter = false;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			counter = true;
			break;
			}
		}
	counter==true ? cout << "YES" : cout << "NO";
	}
