#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int even = 0;
		int odd = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i]%2 != i%2) {
				if (a[i]%2 == 0) {
					even++;
					}
				else {odd++;}
				
				}
			
				}
				if (even == 0 && odd && 0) {
					cout << 0 << "\n";
					}
				else if (even == odd) {
					cout << even << "\n";
					}
				else if (even != odd) {
					cout << -1 << "\n";
					}
			}
		}
	
