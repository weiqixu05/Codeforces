#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		}
	sort(a, a+n);
	int total = 0;
	int tally = 0;
	for (int i = n-1; i >= 0; i--) {
		total+= a[i];
		sum -= a[i];
		tally++;
		if (total > sum) {
			break;
			}
		}
	cout << tally;
	}
