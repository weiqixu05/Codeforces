#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if(s[i] < 91) {
			s[i] += 32;
			}
		if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
			s.erase(s.begin()+i);
			n--;
			i--;
			}
		}
	for (int i = 0; i < n; i++) {
		cout << "." << s[i];
		}
	}
