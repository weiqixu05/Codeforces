#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,a,b;
		cin >> n>>a>>b;
		vector<char>s;
		int k = 97;
		for (int i = 0; i < n; i++) {
			if(b>1){s.pb((char)k); k++;}
			else {s.pb((char)k);}
			b--;
			}
		for (int i =0; i < n; i++) {
			cout << s[i%a];
			}
		cout << "\n";
		}
	}
