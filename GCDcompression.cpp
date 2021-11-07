#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n*2];
		int total = 0;
		for (int i = 0; i < n*2; i++) {
			cin >> a[i];
			if (total < 2 && a[i]%2 == 0) {
				total++;
				}
			}
		
		}
	}
