#include <bits/stdc++.h>
using namespace std;
int main() {
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		int a[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		} 
		if (sum/n * n < sum) {
			sum += n-(sum%n);
			}
			cout << sum/n << "\n";
		}
		
	}
