#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int j = n/k;
		if (m<j) {
			cout << m << "\n";
			}
		else if(m==n||(j==1&&m>1)||m>=n-1) {
			cout << 0 << "\n";
			}
		else {cout << j << "\n";}
		}
	}
