#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if(s[i] == t[i] && s[i] == 'C') {
			
			sum++;
			}
		}
		cout << sum;
	}
