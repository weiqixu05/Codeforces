#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >>t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			}
		sort(a, a+n);
		int min = 1001;
		for (int i = 0; i < n-1; i++) {
			int j = a[i+1] - a[i];
			if(min > j) {
				min = j;
				}
			}
		cout << min << "\n";}
		
	}
