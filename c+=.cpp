#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, n;
		cin >> a >> b >> n;
		int sum = 0;
		while (max(a, b) <= n) {
			if (a <= b) {
			a = min(a, b) + max(a, b);
			sum++;
			}
			else {b = min(a, b) + max(a, b);
				sum++;}
			} 
		cout << sum << "\n";
		}
	}
