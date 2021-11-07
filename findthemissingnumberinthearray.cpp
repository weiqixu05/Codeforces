#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int sum = (n*(n+1))/2;
	int tally = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tally += a[i];
		}
	cout << sum-tally;
	}
