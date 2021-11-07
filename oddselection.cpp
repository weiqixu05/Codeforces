#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		int even = 0;
		int odd = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a[i]%2 == 0 ? even++ : odd++;
			}
			int tally = 0;
		for (int i = 1; i <= odd; i+=2) {
			if (x%2==0 && (even==0 || odd == 0)) {
				tally--;
				break;
				}
			if((x-i==0 || x-i-even <= 0)) {
				tally++;
				break;
				}
			}
			tally > 0 ? cout << "YES\n" : cout << "NO\n";
		}
	}
