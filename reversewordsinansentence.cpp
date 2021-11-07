#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	int n = s.size()-1;
	string st;
	while (n>-1) {
		if(s[n]==' ') {
			for (int i = st.size()-1; i>-1; i--) {
				cout << st[i];
				}
			cout << " ";
			st.clear();
			}
		else {
			st.push_back(s[n]);
			}
		n--;
		}
	for (int i = st.size()-1; i >-1; i--) {
		cout << st[i];
		}
	}
