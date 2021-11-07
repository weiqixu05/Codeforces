#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll a[n][n];
	ll min[3] = {3000000000, 0, 0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if(a[i][j] < min[0]) {
				min[0] = a[i][j];
				min[1] = i;
				min[2] = j;
				}
			}
		}
	if(min[1] == 0 && min[2] == 0) {
		for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
			if (j==n-1) {
				cout << "\n";
				}
			}
		}
		}
	else if (min[1] == n-1 && min[2] == 0) {
		for (int i =0; i < n; i++) {
			for (int j = n-1; j >= 0; j--) {
				cout << a[j][i] << " ";
				if(j==0) {
					cout << "\n";
					}
				}
			}
		}
	else if (min[1] == 0 && min[2] == n-1) {
		for (int i = n-1; n >=0; i--) {
			for (int j = 0; j < n; j++) {
				cout << a[j][i] << " ";
				if(j==n-1) {
					cout << "\n";
					}
				}
			}
		}
	else {
		for (int i = n-1; i >= 0; i--) {
			for (int j = n-1; j >=0; j--) {
				cout << a[i][j] << " ";
				if (j==0) {
					cout << "\n";
					}
				}
			}
		}
	}
//fix the one where min is top right
