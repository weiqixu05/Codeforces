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
		int n, m;
		cin >> n >> m;
		cout << "W";
		for (int i = 0; i < m-1; i++) {
			cout << "B";} 
		cout << "\n";
		for (int i = 0; i < n-1; i++) {
			for (int j = 0; j < m; j++) {
				cout << "B";
				} cout << "\n";
			}
		}
	}
