#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
			}
		}
	int one = 0; int two = 0;int three = 0;
	for (int i = 0; i < n; i++) {
		one += a[i][0];
		}
	for (int i = 0; i < n; i++) {
		two += a[i][1];
		}
	for (int i = 0; i < n; i++) {
		three += a[i][2];
		}
	if (one == 0 && two == 0 && three == 0) {
		cout << "YES";
		}
	else {cout << "NO";}
	}
