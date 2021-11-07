#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int a[4];
		for (int i = 0; i < 4; i++) {
			cin >> a[i];
			}
		if ((a[0] == a[3] && (a[2] + a[1]) == a[0]) || (a[2] == a[1] && (a[0] + a[3]) == a[2])) {
			cout << "YES\n";
			}
		else if ((a[0] == a[2]) && (a[0] * a[1]) + (a[2] * a[3]) == a[0] * a[2]) {
			cout << "YES\n";
			}
		else if ((a[0] == a[3]) && (a[0] * a[1]) + (a[2] * a[3]) == a[0] * a[3]) {
			cout << "YES\n";
			}
		else if ((a[1] == a[2]) && (a[0] * a[1]) + (a[2] * a[3]) == a[1] * a[2]) {
			cout << "YES\n";
			}
		else if ((a[1] == a[3]) && (a[0] * a[1]) + (a[2] * a[3]) == a[1] * a[3]) {
			cout << "YES\n";
			}
		else {cout << "NO\n";}
		}
	}
