#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (m%2 == 0) {
			cout << (m/2)*n << "\n";
			}
		else if(n%2 == 0) {
			cout << (n/2)*m << "\n";
			}
		else if(min(m, n) == 1) {
			cout << (max(m, n)/2) + 1 << "\n";
			}
		else {
			int x = max(m, n);
			int y = min(m, n);
			cout << (((x-1)/2)*y)+((y+1)/2) << "\n";
			}
	}
}
