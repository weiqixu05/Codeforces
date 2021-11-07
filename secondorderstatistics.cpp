#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a, a+n);
	if (n == 1 || a[0] == a[n-1]) {
		cout << "NO";
		}
	else {
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i-1]) {
			cout << a[i];
			break;
			}
		}
	}
}
