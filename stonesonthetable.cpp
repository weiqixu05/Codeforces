#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	char a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i-1]) {
			sum++;
			}
		}
	cout << sum;
	}
