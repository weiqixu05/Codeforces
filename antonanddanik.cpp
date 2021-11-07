#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a = 0;
	int b = 0;
		for (int i= 0; i < n; i++) {
		s[i]=='A'? a++ : b++;
		}
	if(a>b) {
		cout << "Anton";
		}
	else if(b>a) {
		cout << "Danik";
		}
	else {cout << "Friendship";}
	}
